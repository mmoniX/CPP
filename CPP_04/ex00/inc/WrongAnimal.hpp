/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:40:33 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/16 12:42:15 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal( void );
		WrongAnimal( std::string atype );
		WrongAnimal( const WrongAnimal &obj );
		WrongAnimal &operator=( const WrongAnimal &obj );
		virtual ~WrongAnimal();

		std::string getType( void ) const;
		virtual void makeSound( void ) const;
};

#endif
