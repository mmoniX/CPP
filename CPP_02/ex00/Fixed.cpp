/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:43:52 by mmonika           #+#    #+#             */
/*   Updated: 2025/06/27 13:43:52 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
    std::cout << "Default constructor called" << std::endl;
    number = 0;
}

Fixed::Fixed( const Fixed &obj )
{
    std::cout << "Copy constructor called" << std::endl;
    // number = obj.number;
    *this = obj;
}

Fixed &Fixed::operator=( const Fixed &obj )
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &obj)
        number = obj.getRawBits();
    return *this;
}

Fixed::~Fixed ()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return number;
}

void Fixed::setRawBits( int const raw )
{
    number = raw;
}
