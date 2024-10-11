#pragma once
#include "Alive.h"

class IAttacker {
public:
	IAttacker();
	~IAttacker();
	virtual void Attack(Alive* target) = 0;
};