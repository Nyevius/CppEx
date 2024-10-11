#pragma once
#include "Vector.h"

class Alive {
public:
	Alive(float hp);
	~Alive();
	virtual float GetMaxHp();
	virtual float GetCurrHp();
	virtual void Damage(float dmgTaken);
protected:
	float maxHp;
	float currHp;
};