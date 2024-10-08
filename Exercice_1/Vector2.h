#ifndef __VECTOR2_H__
#define __VECTOR2_H__

class Vector2
{
public:
	float	x;
	float	y;

	Vector2(float x, float y);

	void printXY();
	void setXY(float x, float y);
	void setX(float x);
	void setY(float y);

	~Vector2();
};

#endif
