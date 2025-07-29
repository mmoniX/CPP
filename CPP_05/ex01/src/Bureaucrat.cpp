/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 17:20:28 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/29 15:01:07 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(42) {}

Bureaucrat::Bureaucrat(std::string bname, int bgrade) : name(bname), grade(bgrade)
{
    if (bgrade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (bgrade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.name), grade(obj.grade) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    if (this != &obj)
        grade = obj.grade;
    return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const { return name; }

int Bureaucrat::getGrade() const { return grade; }

void Bureaucrat::incrementGrade()
{
    if (grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    grade--;
}

void Bureaucrat::decrementGrade()
{
    if (grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    grade++;
}

void Bureaucrat::signForm(Form &form)
{
    try {
        form.beSigned(*this);
		std::cout << name << " signed " << form.getName() << std::endl;
    } catch(const std::exception& e) {
        std::cerr << name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

const char *Bureaucrat::GradeTooHighException::what() const noexcept
{
    return "Bureaucrat's grade is too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const noexcept
{
	return ("Bureaucrat's grade is too low!");
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj)
{
    out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
    return (out);
}
