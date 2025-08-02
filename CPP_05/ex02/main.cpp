/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 20:25:31 by mmonika           #+#    #+#             */
/*   Updated: 2025/08/02 14:15:23 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "inc/ShrubberyCreationForm.hpp"
#include "inc/RobotomyRequestForm.hpp"
#include "inc/PresidentialPardonForm.hpp"
#include "inc/Bureaucrat.hpp"


int main() {
    try {
        std::cout << "\n--- Creating Bureaucrats ---\n";
        Bureaucrat bob("Bob", 146);
        std::cout << bob << std::endl;
        Bureaucrat alice("Alice", 70);
        std::cout << alice << std::endl;
        Bureaucrat president("President", 1);
        std::cout << president << std::endl;

        std::cout << "\n--- Creating Forms ---\n";
        ShrubberyCreationForm shrub("home");
        std::cout << shrub << std::endl;
        RobotomyRequestForm robot("Bender");
        std::cout << robot << std::endl;
        PresidentialPardonForm pardon("Hacker");
        std::cout << pardon << std::endl;

        std::cout << "\n--- Attempt to Sign with Low Grade ---\n";
        bob.signForm(shrub);    // Fail: Bob's grade is 146, needed: 145
        bob.signForm(robot);    // Fail
        bob.signForm(pardon);   // Fail

        std::cout << "\n--- Promote Bob and Sign Shrubbery Form ---\n";
        bob.incrementGrade();   // Grade becomes 145
        bob.signForm(shrub);    // Success

        std::cout << "\n--- Alice Signs Robotomy Form ---\n";
        alice.signForm(robot);  // Success

        std::cout << "\n--- President Signs Pardon Form ---\n";
        president.signForm(pardon);  // Success

        std::cout << "\n--- Execute Forms with Insufficient Grade ---\n";
        bob.executeForm(shrub);    // Fail (145 < 137)
        alice.executeForm(robot); // Fail (70 < 45)
        alice.executeForm(pardon); // Fail (70 < 5)

        std::cout << "\n--- President Executes All Forms ---\n";
        president.executeForm(shrub);   // Success
        president.executeForm(robot);   // Success
        president.executeForm(pardon);  // Success

    } catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
