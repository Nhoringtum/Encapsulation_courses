#pragma once
#ifndef __MOB_H__
#define __MOB_H__
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"

class Mob : Entity, Alive, AMovable
{
public:

	Mob(float x, float y, float maxLife, float actualLife, Vector2 _dir, float _spd);

	void takeDamage(float damage);
	void move();
};

#endif