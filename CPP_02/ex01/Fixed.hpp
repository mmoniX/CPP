/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 23:53:50 by mmonika           #+#    #+#             */
/*   Updated: 2025/06/27 23:53:50 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int                 number;
        static const int    bits = 8;
    public:
		Fixed();
		~Fixed();
        Fixed( const int value );
		Fixed( const float value );
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);
		float toFloat ( void ) const;
		int toInt( void ) const;
		void setRawBits( int const raw );
		int getRawBits( void ) const;
};
std::ostream &operator<<(std::ostream &out, const Fixed &obj);

#endif
