#include "Alive.h"
#include <iostream>

Alive::Alive(float hp)
{
	maxHp = hp;
	currHp = hp;
}

Alive::~Alive()
{
}

float Alive::GetMaxHp()
{
	return this->maxHp;
}

float Alive::GetCurrHp()
{
	return this->currHp;
}

void Alive::Damage(float dmgTaken)
{
	currHp -= dmgTaken;
}
