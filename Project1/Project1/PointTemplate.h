#ifndef __PointTemplate_H__
#define __PointTemplate_H__
#include "Swap.h"
#include <iostream>
#include <math.h>

template <class TYPE>
class PointT
{
public:

	TYPE x, y;


	PointT& PointT::operator+ (const PointT &p) const
	{
		PointT tmp;
		tmp.x = x + p.x;
		tmp.y = y + p.y;
		return(tmp);
	}

	PointT& PointT::operator- (const PointT &p2) const
	{
		PointT tmp;
		tmp.x = x - p2.x;
		tmp.y = y - p2.y;
		return(tmp);
	}

	const PointT& PointT::operator+= (const PointT &p3)
	{
		x += p3.x;
		y += p3.y;

		return *this;
	}

	const PointT& PointT::operator-=(const PointT &p4)
	{
		x -= p4.x;
		y -= p4.y;

		return(*this);
	}

	bool PointT::operator==(const PointT &p5) const
	{
		return (x == p5.x && y == p5.y);
	}

	bool PointT::operator!=(const PointT &p6) const
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

	TYPE DistanceTo(const PointT &p7)
	{
		return sqrt(pow(p7.x - x, 2) + pow(p7.y - y, 2));
	}
};





#endif //__PointTemplate_h__