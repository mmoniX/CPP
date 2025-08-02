/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:49:04 by mmonika           #+#    #+#             */
/*   Updated: 2025/08/02 14:48:52 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PPF_HPP
# define PPF_HPP

# include <iostream>
# include <exception>
# include <fstream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string target;
  public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string ptarget);
    PresidentialPardonForm(const PresidentialPardonForm &obj);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);
    ~PresidentialPardonForm();
		void executeAction() const;
};

#endif
