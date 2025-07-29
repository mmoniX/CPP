/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 22:32:06 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/29 13:40:35 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Form.hpp"

int main()
{
    std::cout << "---Valid Bureaucrat and Form Creation---\n" << std::endl;
    try {
        Bureaucrat john("John", 42);
        Form contract("Contract A", 50, 30);
        std::cout << john << std::endl;
        std::cout << contract << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n---Invalid Form Creation(grade too high)---\n" << std::endl;
    try {
        Form invalidFormHigh("Invalid High", 0, 30);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n---Invalid Form Creation(grade too low)---\n" << std::endl;
    try {
        Form invalidFormLow("Invalid Low", 50, 160);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n---Bureaucrat signs Form(success)---\n" << std::endl;
    try {
        Bureaucrat alice("Alice", 10);
        Form permit("Permit B", 20, 10);
        std::cout << permit << std::endl;
        alice.signForm(permit);
        std::cout << permit << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n---Bureaucrat signs Form (failure)---\n" << std::endl;
    try {
        Bureaucrat bob("Bob", 100);
        Form secret("Secret C", 50, 30);
        bob.signForm(secret);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n---Form already signed---\n" << std::endl;
    try {
        Bureaucrat dave("Dave", 1);
        Form topSecret("Top Secret", 5, 1);
        dave.signForm(topSecret);
        dave.signForm(topSecret);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}