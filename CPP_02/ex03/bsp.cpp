/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 13:38:03 by mmonika           #+#    #+#             */
/*   Updated: 2025/07/06 14:25:59 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

/*
If all cross product have the same sign, the point is inside
If any cross product is zero, the point is on the edge
If signs differ, the point is outside
*/

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float Pax = (point.getX() - a.getX()).toFloat();
	float Pbx = (point.getX() - b.getX()).toFloat();
	float Pcx = (point.getX() - c.getX()).toFloat();
	float Pay = (point.getY() - a.getY()).toFloat();
	float Pby = (point.getY() - b.getY()).toFloat();
	float Pcy = (point.getY() - c.getY()).toFloat();

	float Bax = (b.getX() - a.getX()).toFloat();
	float Bay = (b.getY() - a.getY()).toFloat();
	float Cbx = (c.getX() - b.getX()).toFloat();
	float Cby = (c.getY() - b.getY()).toFloat();
	float Acx = (a.getX() - c.getX()).toFloat();
	float Acy = (a.getY() - c.getY()).toFloat();
	
	float d1 = (Bax * Pay) - (Bay * Pax);
	float d2 = (Cbx * Pby) - (Cby * Pbx);
	float d3 = (Acx * Pcy) - (Acy * Pcx);

	if ((d1 > 0 && d2 > 0 && d3 > 0) || (d1 < 0 && d2 < 0 && d3 < 0))
		return (true);
	return (false);
}
