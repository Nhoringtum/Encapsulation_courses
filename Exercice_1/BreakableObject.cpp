#include "BreakableObject.h"
#include <iostream>

BreakableObject::BreakableObject() : Entity(), Alive()
{
	std::cout << "Breakable Object just created at x = 0 and y = 0 with 10 life (default values)" << std::endl;
}

BreakableObject::BreakableObject(float x, float y, float maxLife, float actualLife) : Entity(x, y), Alive(maxLife, actualLife)
{
	std::cout << "Breakable Object just created at x = " << x << " and y = " << y << " with " << maxLife << " life" << std::endl;
}

void BreakableObject::takeDamage(float _damage)
{
	Alive::takeDamage(_damage);
	std::cout << "Breakable Object just broke" << std::endl;
}