/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:25:37 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/13 17:57:31 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
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
