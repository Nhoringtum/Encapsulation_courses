#include "Mob.h"
#include <iostream>


Mob::Mob(float _x, float _y, float _maxLife, float _actualLife, Vector2 _dir, float _spd) : Entity(_x, _y), Alive(_maxLife, _actualLife), AMovable(_dir, _spd)
{
	std::cout << "Mob just created at x = " << _x << " and y = " << _y << " with " << _maxLife << " lifes with direction x = " << _dir.x << " and y = " << _dir.y << std::endl;
}

void Mob::takeDamage(float _damage)
{
	Alive::takeDamage(_damage);
	std::cout << "Mob just die" << std::endl;
}

void Mob::move()
{
	vect.x = dir.x;
	vect.y = dir.y;
	std::cout << "Mob move to x = " << vect.x << " and y = " << vect.y << std::endl;
}
