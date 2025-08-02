/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 13:48:09 by mmonika           #+#    #+#             */
/*   Updated: 2025/08/02 16:38:43 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &obj) { (void)obj; }

Intern &Intern::operator=(const Intern &obj)
{
    (void)obj;
	return *this;
}

Intern::~Intern() {}

AForm *Intern::makeForm(std::string iname, std::string itarget)
{   
    std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    for (int i = 0; i < 3; i++)
    {
        if (iname == forms[i])
        {
            std::cout << "Intern creates " << iname << std::endl;
            switch (i)
            {
                case 0: return new ShrubberyCreationForm(itarget);
                case 1: return new RobotomyRequestForm(itarget);
                case 2: return new PresidentialPardonForm(itarget);
            }
        }
    }
	std::cerr << "Intern can't create " << iname << " form" << std::endl;
    return NULL;
}
