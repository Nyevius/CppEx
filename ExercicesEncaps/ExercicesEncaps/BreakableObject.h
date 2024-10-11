#pragma once
#include "Alive.h"
#include "Entity.h"

class BreakableObject : Entity, Alive
{
public:
	BreakableObject(Vector pos, float hp);
	void Damage(float dmgTaken) override;
};

