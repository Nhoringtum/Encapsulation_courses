#include "StaticObject.h"
#include "Entity.h"
#include <iostream>

StaticObject::StaticObject(float _x, float _y) : Entity(_x, _y)
{
	myEntity.setCoordXY(x, y);
	std::cout << "Static Object just created at " << x << " and " << y << std::endl;
}