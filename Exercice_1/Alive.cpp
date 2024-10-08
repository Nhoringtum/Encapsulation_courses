#include "Alive.h"

Alive::Alive(float _maxLife) : maxLife(_maxLife){}

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