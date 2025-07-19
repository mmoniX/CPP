/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:36:43 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/19 18:03:28 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Animal_HPP
#define Animal_HPP

# include <iostream>

class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal( void );
		AAnimal( std::string atype );
		AAnimal( const AAnimal &obj );
		AAnimal &operator=( const AAnimal &obj );
		virtual ~AAnimal();

		std::string getType( void ) const;
		virtual void makeSound( void ) const = 0;
};

#endif
