/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 13:34:13 by mmonika           #+#    #+#             */
/*   Updated: 2025/08/02 13:34:15 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "AForm.hpp"

class AForm;

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

        void signForm(AForm &aform);
		void executeForm(AForm const &form) const;
        
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
