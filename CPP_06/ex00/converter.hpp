/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 10:50:44 by mmonika           #+#    #+#             */
/*   Updated: 2025/08/20 13:50:46 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <string>

class ScalarConverter
{
	private:
		ScalarConverter(); //to prevent being instantiate by user
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &obj);
		ScalarConverter &operator=(const ScalarConverter &obj);
	public:
		static void convert(std::string str);
};

void convertChar(std::string str, int len);
void convertInt(std::string str);
void convertFloat(std::string str);
void convertDouble(std::string str);
void nonPrintable(std::string str);

	


#endif