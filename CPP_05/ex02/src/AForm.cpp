/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:06:50 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/29 15:09:42 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AForm.hpp"

AForm::AForm() : name("Default"), isSigned(false), signGrade(42), executeGrade(24) {}

AForm::AForm(std::string fname, int fsignGrade, int fexecuteGrade)
    : name(fname), isSigned(false), signGrade(fsignGrade), executeGrade(fexecuteGrade)
{
    if (fsignGrade < 1 || fexecuteGrade < 1)
        throw AForm::GradeTooHighException();
    if (fsignGrade > 150 || fexecuteGrade > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &obj) : name(obj.name), isSigned(obj.isSigned), 
                            signGrade(obj.signGrade), executeGrade(obj.executeGrade) {}

AForm &AForm::operator=(const AForm &obj)
{
    if (this != &obj)
        isSigned = obj.isSigned;
    return *this;
}

AForm::~AForm() {}

std::string AForm::getName() const { return name; }

bool AForm::getSigned() const { return isSigned; }

int AForm::getSignGrade() const { return signGrade; }

int AForm::getExecuteGrade() const { return executeGrade; }

void AForm::beSigned(const Bureaucrat &b)
{
	if (isSigned)
		throw std::runtime_error("AForm is already signed");
    if (b.getGrade() > signGrade)
        throw AForm::GradeTooLowException();
	isSigned = true;
}

const char *AForm::GradeTooHighException::what() const noexcept
{
    return ("AForm grade is too high!");
}

const char *AForm::GradeTooLowException::what() const noexcept
{
	return ("Grade is too low to sign the AForm!");
}

std::ostream &operator<<(std::ostream &out, const AForm &obj)
{
	out << "AForm Name: " << obj.getName() << std::endl
		<< "Is Signed: " << (obj.getSigned() ? "Yes" : "No") << std::endl
		<< "Sign Grade: " << obj.getSignGrade() << std::endl
		<< "Execute Grade: " << obj.getExecuteGrade() << std::endl;
	return out;
}
