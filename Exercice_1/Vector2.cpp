#include "Vector2.h"
#include <iostream>
#include <string>
#include <math.h>

Vector2::Vector2(float _x, float _y) : x(_x), y(_y){}

Vector2::Vector2() : x(0.f), y(0.f){}

Vector2 Vector2::operator+(const Vector2& _right)
{
	Vector2 tempVect(this->x + _right.getX(), this->y + _right.getY());
	return (tempVect);
}

Vector2::~Vector2() {}

void Vector2::setXY(float x, float y)
{
	this->x = x;
	this->y = y;
}

void Vector2::setX(float x)
{
	this->x = x;
}

void Vector2::setX(std::string _xstr)
{
	this->x = std::stof(_xstr);
	std::cout << "X pos is setted in " << _xstr << std::endl;
}

void Vector2::setY(float y)
{
	this->y = y;
}

float Vector2::getX() const
{
	return (this->x);
}

float Vector2::getY() const
{
	return (this->y);
}

//void Vector2::normalize(Vector2& _vect)
//{
//	normalize(_vect);
//}

std::ostream& operator<<(std::ostream& os, const Vector2& vect)
{
	os << "X : " << vect.x << " / Y : " << vect.y << '\n';
	return os;
}
