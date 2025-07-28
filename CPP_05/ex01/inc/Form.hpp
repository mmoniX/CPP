/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 22:20:22 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/27 23:35:23 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool isSigned;
        const int signGrade;
        const int executeGrade;
    public:
        Form();
        Form(std::string fname, int fsignGrade, int fexecuteGrade);
        Form(const Form &obj);
        Form &operator=(const Form &obj);
        ~Form();

        std::string getName() const;
        bool getSigned() const;
        int getSignGrade() const;
        int getExecuteGrade() const;

        void beSigned(const Bureaucrat &b);

        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const noexcept override;
        };
        
        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const noexcept override;
        };
};
std::ostream &operator<<(std::ostream &out, const Form &obj);

#endif
