#include <iostream>
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "Player.h"
#include "Vector.h"

int main()
{
    StaticObject stc1(Vector(0.5,0.5));
    BreakableObject pot(Vector(1.6, 0.2), 30);
    Mob gobelin(Vector(3.5, 6.7), 50, Vector(4.2, 6.9), 3);
    Player moi(Vector(5.5, 9.5), 50, Vector(-5.1, 1.0), 2, 10);

    return 0;
}