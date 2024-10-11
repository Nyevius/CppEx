#include "AMovable.h"
#include <iostream>

AMovable::AMovable(float speed, Vector direction)
{
	mspeed = speed;
	mdirection = direction;
}

AMovable::~AMovable()
{
}

void AMovable::SetSpeed(float speed)
{
	mspeed = speed;
}

void AMovable::SetDirection(Vector direction)
{
	mdirection = direction;
}
