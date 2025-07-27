/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 17:19:05 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/27 22:16:57 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "\n---Test too high and too low creation---\n" << std::endl;
	try
    {
		Bureaucrat Sleeper1("Bernd", 1500);
	}
	catch(const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
    
	try
	{
		Bureaucrat Sleeper2("Olaf", -10);
	}
	catch(const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "\n---Test increasing---\n" << std::endl;
	Bureaucrat bob("Bob", 2);
	std::cout << bob;

	try
	{
		bob.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << bob;
	
    try
	{
	    bob.incrementGrade();
	}
	catch(const std::exception& e)
	{
	    std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << bob;

	std::cout << "\n---Test decreasing---\n" << std::endl;
	Bureaucrat tim("Tim", 149);
	std::cout << tim;
	try
	{
		tim.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << tim;
	
	try
	{
	    tim.decrementGrade();
	}
	catch(const std::exception& e)
	{
	    std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << tim;
	
	return (0);
}
