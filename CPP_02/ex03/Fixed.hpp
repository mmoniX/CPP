/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 13:37:19 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/06 14:26:34 by mmonika          ###   ########.fr       */
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
		Fixed( void );
		~Fixed();

		Fixed( const int value );
		Fixed( const float value );
		Fixed( const Fixed &other );
		Fixed &operator=(const Fixed &other);

		float toFloat ( void ) const;
		int toInt( void ) const;
		void setRawBits( int const raw );
		int getRawBits( void ) const;

		bool operator>( const Fixed &other ) const;
		bool operator<( const Fixed &other ) const;
		bool operator>=( const Fixed &other );
		bool operator<=( const Fixed &other );
		bool operator==( const Fixed &other );
		bool operator!=( const Fixed &other );
		
		Fixed operator+( const Fixed &other );
		Fixed operator-( const Fixed &other );
		Fixed operator*( const Fixed &other );
		Fixed operator/( const Fixed &other );

		Fixed &operator++();		//++a
		Fixed operator++( int );	//a++
		Fixed &operator--();		//--a
		Fixed operator--( int );	//a--

		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
};
std::ostream &operator<<(std::ostream &out, const Fixed &obj);

#endif
