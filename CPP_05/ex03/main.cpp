/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 13:54:02 by mmonika           #+#    #+#             */
/*   Updated: 2025/08/02 16:45:10 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Intern.hpp"

int main() 
{
    std::cout << "--- Intern creates Forms ---\n";
    Intern someRandomIntern;
    AForm* shrubForm = someRandomIntern.makeForm("shrubbery creation", "Garden");
    AForm* robotForm = someRandomIntern.makeForm("robotomy request", "Bender");
    AForm* pardonForm = someRandomIntern.makeForm("presidential pardon", "Rick");
    AForm* invalidForm = someRandomIntern.makeForm("coffee break", "Office");

    std::cout << "\n--- Bureaucrat Setup ---\n";
    Bureaucrat boss("Alice", 1);
    std::cout << boss;
    Bureaucrat assistant("Bob", 140);
    std::cout << assistant;
    
    std::cout << "\n--- Signing and Executing Forms ---\n";
    try {
        boss.executeForm(*shrubForm);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }
    try {
        assistant.signForm(*robotForm);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }
    try {
        assistant.executeForm(*robotForm);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }
    
    boss.signForm(*shrubForm);
    boss.signForm(*robotForm);
    boss.signForm(*pardonForm);

    boss.executeForm(*shrubForm);
    boss.executeForm(*robotForm);
    boss.executeForm(*pardonForm);

    delete shrubForm;
    delete robotForm;
    delete pardonForm;
    delete invalidForm;

    return 0;
}