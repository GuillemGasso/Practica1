#ifndef __Point2d_H__
#define __Point2d_H__
#include <iostream>
#include <math.h>

class Point2d
{
public:

	float x, y;


	Point2d& Point2d::operator+ (const Point2d &p) const
	{
		Point2d tmp;
		tmp.x = x + p.x;
		tmp.y = y + p.y;
		return(tmp);
	}

	Point2d& Point2d::operator- (const Point2d &p2) const
	{
		Point2d tmp;
		tmp.x = x - p2.x;
		tmp.y = y - p2.y;
		return(tmp);
	}

	const Point2d& Point2d::operator+= (const Point2d &p3)
	{
		x += p3.x;
		y += p3.y;

		return *this;
	}

	const Point2d& Point2d::operator-=(const Point2d &p4)
	{
		x -= p4.x;
		y -= p4.y;

		return(*this);
	}

	bool Point2d::operator==(const Point2d &p5) const
	{
		return (x == p5.x && y == p5.y);
	}

	bool Point2d::operator!=(const Point2d &p6) const
	{
		return (x != p6.x || y != p6.y);
	}

	bool IsZero() const
	{
		return x == 0.0f && y == 0.0f;
	}

	void SetZero()
	{
		x = y = 0.0f;
	}

	float DistanceTo(const Point2d &p7)
	{
		return sqrt(pow(p7.x - x, 2) + pow(p7.y - y, 2));
	}
};





#endif //__Point2d_h__