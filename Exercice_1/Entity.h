#ifndef __ENTITY_H__
#define __ENTITY_H__
#include "Vector2.h"

class Entity
{
public:
	Vector2 vect;
	Entity();
	Entity(float x, float y);

	virtual float getCoordX();
	virtual float getCoordY();
	virtual void setCoordXY(float x, float y);

	~Entity();
};

#endif