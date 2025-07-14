/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 18:35:10 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/14 12:30:14 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap( std::string sname );
		ScavTrap( const ScavTrap &obj);
		ScavTrap &operator=( const ScavTrap &obj);
		~ScavTrap();
		void guardGate( void );
		void attack(const std::string& target);
};

#endif
