#include <iostream>
#include "Entity.h"

Entity::Entity(Vector pos)
{
	vpos = pos;
}

Entity::~Entity()
{
}

float Entity::GetPosX()
{
	return vpos.GetX();
}

float Entity::GetPosY()
{
	return vpos.GetY();
}

void Entity::SetPos(float x, float y)
{
	vpos.Set(x, y);
}
