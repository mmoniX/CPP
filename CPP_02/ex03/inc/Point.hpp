#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
    private:
        const Fixed	x;
        const Fixed	y;
    public:
		Point( void );
		~Point();

		Point( const float n1, const float n2 );
		Point( const Point &other );
		Fixed getX() const;
		Fixed getY() const;
		Point &operator=(const Point &other);
};

#endif
