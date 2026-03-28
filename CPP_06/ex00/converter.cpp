/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 10:50:41 by mmonika           #+#    #+#             */
/*   Updated: 2026/03/28 15:31:59 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &obj) {*this = obj;}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &obj)
{
	(void)obj;
	return *this;
}

static bool isSpecial(const std::string &s) {
	return (
		s == "-inff" || s == "+inff" || s == "nanf" ||
		s == "-inf"  || s == "+inf"  || s == "nan"
	);
}

static LiteralType detectType(const std::string &str) 
{
	if (str.empty())
		return TYPE_INVALID;

	if ((str.size() == 3 && str[0] == '\'' && str[2] == '\'')
		|| (str.size() == 1 && !std::isdigit(static_cast<unsigned char>(str[0]))))
    return TYPE_CHAR;

	if (isSpecial(str))
		return TYPE_SPECIAL;

	bool hasDot = str.find('.') != std::string::npos;
	bool hasF   = str.back() == 'f';

	if (!hasDot && !hasF) 
	{
		char *end;
		errno = 0;
		std::strtol(str.c_str(), &end, 10);
		return (*end == '\0' && errno != ERANGE) ? TYPE_INT : TYPE_INVALID;
	}
	
	if (hasDot && hasF) 
	{
		char *end; 
		errno = 0;
		std::strtof(str.c_str(), &end);
		return (*end == 'f' && *(end+1) == '\0' && errno != ERANGE) ? TYPE_FLOAT : TYPE_INVALID;
	}
	
	if (hasDot) 
	{
		char *end; 
		errno = 0;
		std::strtod(str.c_str(), &end);
		return (*end == '\0' && errno != ERANGE) ? TYPE_DOUBLE : TYPE_INVALID;
	}

	return TYPE_INVALID;
}

static double convertToDouble(const std::string &s, LiteralType t) 
{
	if (t == TYPE_CHAR)
		return (s.size() == 3 && s[0] == '\'' && s[2] == '\'') ? s[1] : s[0];

	if (t == TYPE_INT)
		return static_cast<double>(std::strtol(s.c_str(), NULL, 10));
	
	if (t == TYPE_FLOAT)
		return static_cast<double>(std::strtof(s.c_str(), NULL));

	if (t == TYPE_DOUBLE)
		return std::strtod(s.c_str(), NULL);

	if (s == "nan" || s == "nanf") return NAN;
	if (s == "+inf" || s == "+inff") return INFINITY;
	if (s == "-inf" || s == "-inff") return -INFINITY;

	return NAN;
}

static void printAll(double value)
{
	// CHAR
	std::cout << "char: ";
	if (std::isnan(value) || value < 0 || value > 127)
		std::cout << "impossible\n";
	else if (!std::isprint(static_cast<char>(value)))
		std::cout << "Non displayable\n";
	else
		std::cout << "'" << static_cast<char>(value) << "'\n";

	// INT
	std::cout << "int: ";
	if (std::isnan(value)
		|| value > std::numeric_limits<int>::max()
		|| value < std::numeric_limits<int>::min())
		std::cout << "impossible\n";
	else
		std::cout << static_cast<int>(value) << "\n";

	// FLOAT
	std::cout << "float: ";
	if (std::isnan(value))
		std::cout << "nanf\n";
	else if (std::isinf(value))
		std::cout << (value > 0 ? "+inff\n" : "-inff\n");
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f\n";

	// DOUBLE
	std::cout << "double: ";
	if (std::isnan(value))
		std::cout << "nan\n";
	else if (std::isinf(value))
		std::cout << (value > 0 ? "+inf\n" : "-inf\n");
	else
		std::cout << std::fixed << std::setprecision(1) << value << "\n";
}

void ScalarConverter::convert(const std::string &str) 
{
	LiteralType val = detectType(str);
	
	if (val == TYPE_INVALID) 
	{
		std::cout << "Invalid literal\n";
		return;
	}

	double value = convertToDouble(str, val);
	printAll(value);
}
