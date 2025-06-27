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
        // Fixed( int value ) const;
        // Fixed( const Fixed &obj );
        // Fixed &operator=( const Fixed &obj );
        // ~Fixed ();
        // int getRawBits( void ) const;
        // void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
};

#endif
