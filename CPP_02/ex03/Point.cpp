/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 13:38:55 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/06 14:34:58 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : x(0), y(0) {}

Point::~Point() {}

Point::Point( const float n1, const float n2 ) : x(n1), y(n2) {}

Point::Point( const Point &other ) : x(other.x), y(other.y) {}

Point &Point::operator=(const Point &other)
{
	if(this != &other)
	{
		Fixed x = other.getX();
		Fixed y = other.getY();
	}
	return *this;
}

Fixed Point::getX() const
{
	return (x);
}

Fixed Point::getY() const
{
	return (y);
}
