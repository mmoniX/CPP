/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 18:09:38 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/09 18:17:38 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
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
