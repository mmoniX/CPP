/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:17:24 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/20 18:57:28 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "Materia.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const &type) = 0;
};

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* templates[4];
	public:
		MateriaSource( void );
		MateriaSource( const MateriaSource &obj );
		MateriaSource &operator=( const MateriaSource &obj );
		~MateriaSource();

		void learnMateria( AMateria* m);
		AMateria* createMateria( std::string const &type );
};

#endif