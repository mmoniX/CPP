/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 16:11:14 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/19 12:55:49 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>

class Brain
{
	protected:
		std::string ideas[100];
	public:
		Brain( void );
		Brain( std::string idea );
		Brain( const Brain &obj );
		Brain &operator=( const Brain &obj );
		~Brain();
		void setIdea( const std::string &idea );
		std::string getIdea( void );
};

#endif
