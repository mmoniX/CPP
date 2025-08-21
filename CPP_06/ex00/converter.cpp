/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 10:50:41 by mmonika           #+#    #+#             */
/*   Updated: 2025/08/21 13:53:46 by mmonika          ###   ########.fr       */
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
void ScalarConverter::convert(std::string str)
{
	
}

void convertChar(std::string str, int len);
void convertInt(std::string str);
void convertFloat(std::string str);
void convertDouble(std::string str);
void nonPrintable(std::string str)
{
	if (str == "-inff" || str == "+inff" || str == "nanf" );
		

}

