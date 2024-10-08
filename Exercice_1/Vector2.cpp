#include "Vector2.h"
#include <iostream>

Vector2::Vector2(float _x, float _y) : x(_x), y(_y){}

Vector2::~Vector2() {}

void Vector2::printXY()
{
	std::cout << "x = " << this->x << std::endl;
	std::cout << "y = " << this->y << std::endl;
}

void Vector2::setXY(float x, float y)
{
	this->x = x;
	this->y = y;
}

void Vector2::setX(float x)
{
	this->x = x;
}

void Vector2::setY(float y)
{
	this->y = y;
}