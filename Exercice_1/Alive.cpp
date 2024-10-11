#include "Alive.h"

Alive::Alive() : maxLife(10), actualLife(maxLife){}

Alive::Alive(float _maxLife, float _actualLife) : maxLife(_maxLife), actualLife(_actualLife)
{ 
	if (actualLife > maxLife)
		actualLife = maxLife;
}

Alive::~Alive(){}

float Alive::getMaxLife()
{
	return (this->maxLife);
}

float Alive::getActualLife()
{
	return (this->actualLife);
}

void Alive::takeDamage(float _damage)
{
	this->actualLife -= _damage;
}