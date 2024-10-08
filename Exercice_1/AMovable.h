#ifndef __AMOVABLE_H__
#define __AMOVABLE_H__
#include "Vector2.h"

class AMovable
{
public:
	Vector2 dir;
	float spd;

	AMovable(Vector2 dir, float spd);

	virtual void setDir(float x, float y);
	virtual void setSpd(float spd);
	virtual void move() = 0;

	~AMovable();
};

#endif
