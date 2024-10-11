#include <iostream>
#include "Vector.h"

Vector::Vector(float x, float y)
{
	vx = x;
	vy = y;
}

Vector::~Vector()
{
}

float Vector::GetX()
{
	return vx;
}

float Vector::GetY()
{
	return vy;
}

void Vector::Set(float x, float y)
{
	vx = x;
	vy = y;
}