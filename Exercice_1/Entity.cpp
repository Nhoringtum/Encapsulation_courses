#include "Entity.h"
#include <iostream>

Entity::Entity() : vect(0, 0) {}

Entity::Entity(float _x, float _y) : vect(_x, _y) {}

Entity::~Entity(){}

float Entity::getCoordX()
{
	return (vect.x);
}

float Entity::getCoordY()
{
	return (vect.y);
}

void Entity::setCoordXY(float _x, float _y)
{
	vect.x = _x;
	vect.y = _y;
}