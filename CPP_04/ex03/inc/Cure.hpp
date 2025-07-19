/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:18:10 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/19 18:01:56 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "Materia.hpp"
# include "Character.hpp"

class Cure : public AMateria
{
	public:
		Cure( void );
		Cure(std::string const &type);
		Cure(const Cure &obj);
		Cure &operator=(const Cure &obj);
		virtual ~Cure();

		virtual AMateria *clone() const;
		void use( ICharacter& target );	
};

#endif