#include "Mob.h"
#include <iostream>

Mob::Mob(Vector pos, float hp, Vector dir, float speed) : Entity(pos), Alive(hp), AMovable(speed, dir)
{

}

void Mob::Damage(float dmgTaken)
{
	std::cout << "Mob just died" << std::endl;
}

void Mob::Move(Vector pos, Vector direction, float speed)
{
	std::cout << "Mob move to x = " << pos.GetX() << " and y = " << pos.GetY() << std::endl;
}
