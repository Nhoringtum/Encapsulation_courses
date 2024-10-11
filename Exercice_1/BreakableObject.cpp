#include "BreakableObject.h"
#include <iostream>

BreakableObject::BreakableObject() : Entity(), Alive()
{
	std::cout << "Breakable Object just created at x = 0 and y = 0 with 10 lifes (default values)" << std::endl;
}

BreakableObject::BreakableObject(float _x, float _y, float _maxLife, float _actualLife) : Entity(_x, _y), Alive(_maxLife, _actualLife)
{
	std::cout << "Breakable Object just created at x = " << _x << " and y = " << _y << " with " << _maxLife << " lifes" << std::endl;
}

void BreakableObject::takeDamage(float _damage)
{
	Alive::takeDamage(_damage);
	std::cout << "Breakable Object just broke" << std::endl;
}