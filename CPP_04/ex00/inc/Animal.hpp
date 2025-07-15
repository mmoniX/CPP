/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:36:43 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/15 17:34:20 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal( void );
		Animal( std::string atype );
		Animal( const Animal &obj );
		Animal &operator=( const Animal &obj );
		virtual ~Animal();

		std::string getType( void ) const;
		virtual void makeSound( void ) const;
};

#endif
