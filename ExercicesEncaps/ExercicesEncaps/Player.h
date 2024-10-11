#ifndef PLAYER_H__
#define PLAYER_H__

#include <iostream>

#include "Entity.h"
#include "Alive.h"
#include "Amovable.h"
#include "IAttacker.h"

class Player : public Entity, Alive, AMovable, IAttacker
{
public:
    Player(Vector pos, float maxH, Vector dir, float speed, float _damagedeal);
    void Damage(float dmgTaken) override;
    void Move(Vector pos, Vector dir, float speed) override;
    void Attack(Alive* target) override;

private:
    float damagedeal;
};

#endif