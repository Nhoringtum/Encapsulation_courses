#include "StaticObject.h"
#include "Entity.h"
#include <iostream>

StaticObject::StaticObject(float _x, float _y) : Entity(_x, _y)
{
	myEntity.setCoordXY(_x, _y);
	std::cout << "Static Object just created at " << _x << " and " << _y << std::endl;
}