/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:05:59 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/19 18:02:24 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
# define MATERIA_HPP

# include <iostream>
# include "Character.hpp"

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria( void );
		AMateria( std::string const &type );		//given
		AMateria( const AMateria &obj );
		AMateria &operator=( const AMateria &obj );
		virtual ~AMateria();

		std::string const &getType() const;		//given Returns the materia type
		virtual AMateria* clone() const = 0;		//given
		virtual void use( ICharacter& target );		//given
};

#endif