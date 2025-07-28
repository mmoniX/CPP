/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 22:21:02 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/27 23:59:03 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Default"), isSigned(false), signGrade(42), executeGrade(24) {}

Form::Form(std::string fname, int fsignGrade, int fexecuteGrade)
    : name(fname), signGrade(fsignGrade), executeGrade(fexecuteGrade)
{
    if (fsignGrade < 1 || fexecuteGrade < 1)
        throw Form::GradeTooHighException();
    if (fsignGrade > 150 || fexecuteGrade > 150)
        throw Form::GradeTooLowException();
    isSigned = false;
}

Form::Form(const Form &obj) : name(obj.name), isSigned(obj.isSigned), 
                            signGrade(obj.signGrade), executeGrade(obj.executeGrade) {}

Form &Form::operator=(const Form &obj)
{
    if (this != &obj)
        isSigned = obj.isSigned;
    return *this;
}

Form::~Form() {}

std::string Form::getName() const { return name; }

bool Form::getSigned() const { return isSigned; }

int Form::getSignGrade() const { return signGrade; }

int Form::getExecuteGrade() const { return executeGrade; }

void Form::beSigned(const Bureaucrat &b)
{
    if (b.getGrade() > signGrade)
        throw Form::GradeTooLowException();
    isSigned = true;
}

const char *Form::GradeTooHighException::what() const noexcept
{
    return ("Form grade is too high!");
}

const char *Form::GradeTooLowException::what() const noexcept
{
	return ("Form grade is too low!");
}

std::ostream &operator<<(std::ostream &out, const Form &obj)
{
	out << "Form Name: " << obj.getName() << std::endl
		<< "Is Signed: " << (obj.getSigned() ? "Yes" : "No") << std::endl
		<< "Sign Grade: " << obj.getSignGrade() << std::endl
		<< "Execute Grade: " << obj.getExecuteGrade() << std::endl;
	return out;
}
