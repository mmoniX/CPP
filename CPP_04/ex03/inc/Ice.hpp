/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:18:03 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/20 18:56:44 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "Materia.hpp"

class Ice : public AMateria
{
	public:
		Ice( void );
		Ice(std::string const &type);
		Ice(const Ice &obj);
		Ice &operator=(const Ice &obj);
		virtual ~Ice();

		virtual AMateria *clone() const;
		void use( ICharacter& target );	
};

#endif