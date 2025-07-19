/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:36:43 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/19 13:28:13 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Animal_HPP
#define Animal_HPP

# include <iostream>

class A_Animal
{
	protected:
		std::string type;
	public:
		A_Animal( void );
		A_Animal( std::string atype );
		A_Animal( const A_Animal &obj );
		A_Animal &operator=( const A_Animal &obj );
		virtual ~A_Animal();

		std::string getType( void ) const;
		virtual void makeSound( void ) const = 0;
};

#endif
