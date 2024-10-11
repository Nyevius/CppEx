#pragma once
#include "Entity.h"
#include "AMovable.h"
#include "Alive.h"

class Mob : public Entity, Alive, AMovable
{
public:
	Mob(Vector pos, float hp, Vector dir, float speed);
	void Damage(float dmgTaken) override;
	void Move(Vector pos, Vector direction, float speed) override;
};

