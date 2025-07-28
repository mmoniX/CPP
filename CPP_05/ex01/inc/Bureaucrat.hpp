/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 17:20:22 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/27 22:50:53 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string bname, int bgrade);
        Bureaucrat(const Bureaucrat &obj);
        Bureaucrat &operator=(const Bureaucrat &obj);
        ~Bureaucrat();

        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        void signForm(Form &form);
        
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
std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj);

#endif
