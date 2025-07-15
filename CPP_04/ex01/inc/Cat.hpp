/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:44:14 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/15 17:49:10 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* catbrain;
	public:
		Cat( void );
		Cat( std::string ctype );
		Cat( const Cat &obj );
		Cat &operator=( const Cat &obj );
		~Cat();
		void makeSound( void ) const;
};

#endif
