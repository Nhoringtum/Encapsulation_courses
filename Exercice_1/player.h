#ifndef __PLAYER_H__
#define __PLAYER_H__
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"

class Player : Entity, Alive, AMovable, IAttacker
{
public:
	Player(float x, float y, float maxLife, float actualLife, Vector2 dir);

	void takeDamage(float damage);
	//void move(float x, float y);
	void IAttacker(Alive& target);
};

#endif