#ifndef __VECTOR2_H__
#define __VECTOR2_H__
#include <iostream>

class Vector2
{
public:
	float	x;
	float	y;

	Vector2();
	Vector2(float x, float y);
	Vector2 operator+(const Vector2& _right);

	void setXY(float x, float y);
	void setX(float x);
	void setX(std::string _xstr);
	void setY(float y);
	float getX() const;
	float getY() const;

	friend std::ostream& operator<<(std::ostream& os, const Vector2& vect);

	~Vector2();
};



#endif
