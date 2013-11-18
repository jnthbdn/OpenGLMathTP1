/*
 * Point3D.hpp
 *
 *  Created on: 14 nov. 2013
 *      Author: legeek
 */

#ifndef POINT3D_HPP_
#define POINT3D_HPP_

#include "Point3D.h"

#include <iostream>

template <typename T>
inline Point3D<T>::Point3D(T x, T y, T z, T w)
{
	point[0] = x;
	point[1] = y;
	point[2] = z;
	point[3] = w;
}

template <typename T>
inline Point3D<T>::~Point3D() {}

template <typename T>
inline const T & Point3D<T>::getValue(Point3DValue val) const { return point[val]; }

template <typename T>
inline void Point3D<T>::dot(const Matrice3D<T> & m)
{
	T tmpPts[4];
	T tmpVal;

	for(int i = 0; i < 4; ++i)
		tmpPts[i] = point[i];

	for(int i = 0; i < 4; ++i)
	{
		tmpVal = 0;
		for(int j = 0; j < 4; ++j)
		{
			tmpVal += point[j]*m.getValue(i, j);
		}
		tmpPts[i] = tmpVal;
	}

	for(int i = 0; i < 4; ++i)
		point[i] = tmpPts[i];
}


#endif /* POINT3D_HPP_ */