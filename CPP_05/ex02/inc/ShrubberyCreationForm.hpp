/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:22:42 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/29 17:31:17 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCF_HPP
# define SCF_HPP

# include <iostream>
# include <exception>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string target;
    public:
		ShrubberyCreationForm();
        ShrubberyCreationForm(std::string starget);
        ShrubberyCreationForm(const ShrubberyCreationForm &obj);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);
        ~ShrubberyCreationForm();
		void executeAction() const;
};

#endif
