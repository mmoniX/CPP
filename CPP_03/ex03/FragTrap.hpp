/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 18:34:32 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/13 18:42:41 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap( void );
		FragTrap( std::string fname );
		FragTrap( const FragTrap &obj);
		FragTrap &operator=( const FragTrap &obj);
		~FragTrap();
		void highFivesGuys( void );
};

#endif
