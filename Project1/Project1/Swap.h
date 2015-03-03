#ifndef __Swap_H__
#define __Swap_H__
#include <iostream>

template <class TYPE>
void Swap(TYPE& a, TYPE& b)
{
	TYPE tmp;
	tmp = a;
	a = b;
	b = tmp;
}
#endif