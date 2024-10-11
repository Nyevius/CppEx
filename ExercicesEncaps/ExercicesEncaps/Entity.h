#pragma once
#include "Vector.h"

class Entity {
public:
	Entity(Vector pos);
	~Entity();
	virtual float GetPosX();
	virtual float GetPosY();
	virtual void SetPos(float x, float y);
private:
	Vector vpos;
};