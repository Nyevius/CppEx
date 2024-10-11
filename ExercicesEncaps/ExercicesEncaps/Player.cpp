#include "player.h"

Player::Player(Vector pos, float maxH, Vector dir, float speed, float _damagedeal) : Entity(pos), Alive(maxH), AMovable(dir, speed), damagedeal(_damagedeal)
{
    std::cout << "Player just created at x = " << pos.GetX() << " and y = " << pos.GetY() << " with " << maxH << " life with direction x = " << dir.GetX() << " and y = " << dir.GetY() << " and with a speed of " << speed << std::endl;

}

void Player::Damage(float dmgTaken)
{
    Alive::Damage(dmgTaken);
    if (currHp <= 0)
    {
        std::cout << "Player just die";
    }
}

void Player::Move(Vector pos, Vector dir, float speed)
{
    pos.Set(dir.GetX() * speed, dir.GetY() * speed);
    std::cout << "Player move to x = " << pos.GetX() << "and y = " << pos.GetY();
}

void Player::Attack(Alive* target)
{
    target->Damage(damagedeal);
}