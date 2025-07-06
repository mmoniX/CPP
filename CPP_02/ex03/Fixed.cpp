/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 13:37:46 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/06 14:35:51 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : number(0) {}

Fixed::~Fixed () {}

Fixed::Fixed( const int value )
{
	number = value << bits;
	// std::cout << "Int constructor called" << std::endl;
};

Fixed::Fixed( const float value )
{
	number = roundf(value * (1 << bits));
	// std::cout << "Float constructor called" << std::endl;
};

Fixed::Fixed( const Fixed &obj ) : number(obj.number) {}

Fixed &Fixed::operator=( const Fixed &obj )
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if(this != &obj)
        number = obj.getRawBits();
    return *this;
}

float Fixed::toFloat ( void ) const
{
	return (float)number / (1 << bits);
}

int Fixed::toInt( void ) const
{
	return number >> bits; 
}

void Fixed::setRawBits( int const raw )
{
	number = raw;
}
int Fixed::getRawBits( void ) const
{
	return (number);
}

bool Fixed::operator>( const Fixed &other ) const
{
	return number > other.number;
}

bool Fixed::operator<( const Fixed &other ) const
{
	return number < other.number;
}

bool Fixed::operator>=( const Fixed &other )
{
	return number >= other.number;
}

bool Fixed::operator<=( const Fixed &other )
{
	return number <= other.number;
}

bool Fixed::operator==( const Fixed &other )
{
	return number == other.number;
}

bool Fixed::operator!=( const Fixed &other )
{
	return number != other.number;
}

Fixed Fixed::operator+( const Fixed &other )
{
	Fixed res;
	res.number = this->number + other.number;
	return (res);
}

Fixed Fixed::operator-( const Fixed &other )
{
	Fixed res;
	res.number = this->number - other.number;
	return (res);
}

Fixed Fixed::operator*( const Fixed &other )
{
	Fixed res;
	res.number = (this->number * other.number) / (1 << bits);
	return (res);
}

Fixed Fixed::operator/( const Fixed &other )
{
	Fixed res;
	res.number = this->number / other.number;
	return (res);
}

Fixed &Fixed::operator++()
{
	++this->number;
	return (*this);
}

Fixed Fixed::operator++( int )
{
	Fixed res = *this;
	this->number++;
	return (res);
}

Fixed &Fixed::operator--()
{
	--this->number;
	return (*this);	
}

Fixed Fixed::operator--( int )
{
	Fixed res = *this;
	this->number--;
	return (res);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}
