#include "AMovable.h"

AMovable::AMovable(Vector2 _dir, float _spd) : dir(_dir), spd(_spd){}

AMovable::~AMovable(){}

void AMovable::setDir(float _x, float _y)
{
	dir = { _x, _y };
}

void AMovable::setSpd(float _speed)
{
	spd = _speed;
}