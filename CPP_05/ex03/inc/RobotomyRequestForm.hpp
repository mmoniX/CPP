/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 13:34:47 by mmonika           #+#    #+#             */
/*   Updated: 2025/08/02 14:50:47 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RRF_HPP
# define RRF_HPP

# include <iostream>
# include <exception>
# include <fstream>
# include <random>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string target;
  public:
		RobotomyRequestForm();
    RobotomyRequestForm(std::string rtarget);
    RobotomyRequestForm(const RobotomyRequestForm &obj);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);
    ~RobotomyRequestForm();
		void executeAction() const;
};

#endif
