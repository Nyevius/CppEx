#pragma once
class Vector {
public:
	Vector(float x, float y);
	~Vector();
	float GetX();
	float GetY();
	void Set(float x, float y);

private:
	float vx;
	float vy;
};