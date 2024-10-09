#ifndef __INTEGER_H__
#define __INTEGER_H__
#include <iostream>

class Integer
{
public:
	int x;
	float f_x;

	Integer();
	Integer(int myInt);
	Integer(float myFloat);

	Integer operator+(const Integer& add);
	Integer operator+=(const Integer& add);
	Integer operator-(const Integer& add);
	Integer operator-=(const Integer& add);
	Integer operator*(const Integer& add);
	Integer operator*=(const Integer& add);
	Integer operator/(const Integer& add);
	Integer operator/=(const Integer& add);
	Integer operator%(const Integer& add);
	Integer operator%=(const Integer& add);

	Integer operator+(const float add);
	Integer operator+=(const float add);
	Integer operator-(const float add);
	Integer operator-=(const float add);
	Integer operator*(const float add);
	Integer operator*=(const float add);
	Integer operator/(const float add);
	Integer operator/=(const float add);
	Integer operator%(const float add);
	Integer operator%=(const float add);

	friend std::ostream& operator<<(std::ostream& os, const Integer& myInt);

	int pow(int myInt, int pow);
	float pow(float myfloat, int pow);
};

#endif