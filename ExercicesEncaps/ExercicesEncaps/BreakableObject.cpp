#include "BreakableObject.h"
#include <iostream>

BreakableObject::BreakableObject(Vector pos, float hp) : Entity(pos), Alive(hp)
{
	std::cout << "Breakable Object just created at x = " << pos.GetX() << " and y = " << pos.GetY() << " with " << hp << std::endl;
}

void BreakableObject::Damage(float dmgTaken)
{
	std::cout << "Breakable Object just broke" << std::endl;
}
