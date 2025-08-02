/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:05:26 by mmonika           #+#    #+#             */
/*   Updated: 2025/08/02 12:06:56 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        bool isSigned;
        const int signGrade;
        const int executeGrade;
    public:
        AForm();
        AForm(std::string fname, int fsignGrade, int fexecuteGrade);
        AForm(const AForm &obj);
        AForm &operator=(const AForm &obj);
        virtual ~AForm();

        std::string getName() const;
        bool getSigned() const;
        int getSignGrade() const;
        int getExecuteGrade() const;

        void beSigned(const Bureaucrat &b);
		void execute(Bureaucrat const &executor) const;
		virtual void executeAction() const = 0;

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
		
		class NotSigned : public std::exception
        {
            public:
                const char *what() const noexcept override;
        };
};
std::ostream &operator<<(std::ostream &out, const AForm &obj);

#endif
