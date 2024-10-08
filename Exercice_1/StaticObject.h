#ifndef __STATICOBJECT_H__
#define __STATICOBJECT_H__
#include "Entity.h"

class StaticObject : public Entity
{
public:
	Entity myEntity;
	float x;
	float y;

	StaticObject(float x, float y);
};

#endif
