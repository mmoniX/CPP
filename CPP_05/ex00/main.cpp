/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 17:19:05 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/29 13:03:23 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "\n---Test too high and too low creation---\n" << std::endl;
	try {
		Bureaucrat S1("Bernd", 1500);
		std::cout << S1 << std::endl;
	} catch(const std::exception &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	
	try {
		Bureaucrat S2("Olaf", 0);
		std::cout << S2 << std::endl;
	} catch(const std::exception &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	
	std::cout << "\n---Test increasing---\n" << std::endl;
	try {
		Bureaucrat bob("Bob", 2);
		std::cout << bob << std::endl;
		bob.incrementGrade();
		std::cout << bob << std::endl;
	} catch(const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "\n---Test decreasing---\n" << std::endl;
	try {
		Bureaucrat tim("Tim", 149);
		std::cout << tim << std::endl;
		tim.decrementGrade();
		std::cout << tim << std::endl;
	} catch(const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	
	return (0);
}
