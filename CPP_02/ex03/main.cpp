/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 13:38:13 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/06 14:26:42 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main ( void )
{
	Point a(0, 0);
	Point b(5, 0);
	Point c(0, 5);
	Point value(3, 1.5);

	if (bsp(a, b, c, value) == true)
		std::cout << "Point is INSIDE the triangle" << std::endl;
	else
		std::cout << "Point is OUTSIDE the triangle" <<std::endl;

	return (0);
}
