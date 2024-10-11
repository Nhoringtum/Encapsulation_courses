#ifndef __STATICOBJECT_H__
#define __STATICOBJECT_H__
#include "Entity.h"

class StaticObject : public Entity
{
public:
	Entity myEntity;

	StaticObject(float x, float y);
};

#endif
