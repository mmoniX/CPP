/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:44:20 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/16 18:15:51 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* dogbrain;
	public:
		Dog( void );
		Dog( std::string dtype );
		Dog( const Dog &obj );
		Dog &operator=( const Dog &obj );
		~Dog();
		void makeSound( void ) const;
		Brain *getBrain( void );
};

#endif
