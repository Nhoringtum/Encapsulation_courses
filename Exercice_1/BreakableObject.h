#ifndef __BREAKABLEOBJECT_H__
#define __BREAKABLEOBJECT_H__
#include "Entity.h"
#include "Alive.h"

class BreakableObject : Entity, Alive
{
public:
	BreakableObject();
	BreakableObject(float x, float y, float maxLife, float actualLife);

	void takeDamage(float damage);
};

#endif