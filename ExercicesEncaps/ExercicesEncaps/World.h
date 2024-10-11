#ifndef WORLD_H__
#define WORLD_H__

#include <vector>
#include "Entity.h"

class World
{
public:
	World();
	void init();
	void step();

protected:
	std::vector<Entity*> toto;
};

#endif