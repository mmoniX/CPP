#include "../inc/Point.hpp"
#include <cmath>

/*
If all cross product have the same sign, the point is inside
If any cross product is zero, the point is on the edge
If signs differ, the point is outside

1.Compute vectors for each edge:
Edge AB: AB = B - A
Edge BC: BC = C - B
Edge CA: CA = A - C
2.Compute vectors from vertices to point P:
AP = P - A
BP = P - B
CP = P - C
3.Calculate cross products (2D pseudo-cross product):
d1 = AB × AP = (B.x - A.x)(P.y - A.y) - (B.y - A.y)(P.x - A.x)
d2 = BC × BP = (C.x - B.x)(P.y - B.y) - (C.y - B.y)(P.x - B.x)
d3 = CA × CP = (A.x - C.x)(P.y - C.y) - (A.y - C.y)(P.x - C.x)
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
