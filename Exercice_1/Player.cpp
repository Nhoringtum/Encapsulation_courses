#include "Player.h"
#include <iostream>

Player::Player(float _x, float _y, float _maxLife, float _actualLife, Vector2 _dir) : Entity(_x, _y), Alive(_maxLife, _actualLife), AMovable(_dir, 0)
{
	std::cout << "Player just created at x = " << _x << " and y = " << _y << " with " << _maxLife << " lifes with direction x = " << _dir.x << " and y = " << _dir.y << std::endl;
}

void Player::takeDamage(float _damage)
{
	Alive::takeDamage(10);
	std::cout << "Player just died" << std::endl;
}

void Player::move()
{
	vect.x = dir.x;
	vect.y = dir.y;
	std::cout << "Player move to x = " << vect.x << " and y = " << vect.y << std::endl;
}

void Player::attack(Alive& _target)
{
	_target.actualLife -= 10;
	std::cout << "Player just attacked" << std::endl;
}