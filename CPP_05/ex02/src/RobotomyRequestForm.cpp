/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:49:17 by mmonika           #+#    #+#             */
/*   Updated: 2025/08/02 13:30:15 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	target = "Robot";
}

RobotomyRequestForm::RobotomyRequestForm(std::string rtarget) : AForm("RobotomyRequestForm", 72, 45)
{
	target = rtarget;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm(obj), target(obj.target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	if (this != &obj)
		target = obj.target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::executeAction() const
{
    if (std::rand() % 2 == 1)
	{
		std::cout << "Drrrrrrrr... " << std::endl;
		std::cout << target << " has been robotomized successfully!" << std::endl;
	}
    else 
        std::cout << "The robotomy of " << target << " failed." << std::endl;
}
