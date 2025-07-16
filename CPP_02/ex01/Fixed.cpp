#include "Fixed.hpp"

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	number = 0;
}

Fixed::Fixed( const int value )
{
	number = value << bits;
	std::cout << "Int constructor called" << std::endl;
};

Fixed::Fixed( const float value )
{
	number = roundf(value * (1 << bits));
	std::cout << "Float constructor called" << std::endl;
};

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

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}
