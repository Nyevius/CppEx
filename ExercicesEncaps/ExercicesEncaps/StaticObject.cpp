#include "StaticObject.h"
#include <iostream>

StaticObject::StaticObject(Vector pos) : Entity(pos)
{
	std::cout << "Static Object just created at x = " << pos.GetX() << " and y = " << pos.GetY() << std::endl;
}
