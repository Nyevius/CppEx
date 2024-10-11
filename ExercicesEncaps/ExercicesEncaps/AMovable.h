#pragma once
#include "Vector.h"

class AMovable {
public:
	AMovable(float speed, Vector direction);
	~AMovable();
	virtual void SetSpeed(float speed);
	virtual void SetDirection(Vector direction);
	virtual void Move(Vector pos, Vector direction, float speed) = 0;
private:
	float mspeed;
	Vector mdirection;
};