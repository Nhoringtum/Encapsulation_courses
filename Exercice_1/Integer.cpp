#include "Integer.h"
#include <iostream>
#include <cmath>

Integer::Integer() : x(0)
{
};

Integer::Integer(int _myInt) : x(_myInt)
{
};
Integer::Integer(float _myFloat) : x(_myFloat)
{
};

Integer Integer::operator+(const Integer& _add)
{
	int tempInt = this->x + _add.x;
	return (tempInt);
}

Integer Integer::operator+=(const Integer& _add)
{
	int tempInt = this->x + _add.x;
	return (tempInt);
}
Integer Integer::operator-(const Integer& _add)
{
	int tempInt = this->x - _add.x;
	return (tempInt);
}
Integer Integer::operator-=(const Integer& _add)
{
	int tempInt = this->x - _add.x;
	return (tempInt);
}
Integer Integer::operator*(const Integer& _add)
{
	int tempInt = this->x * _add.x;
	return (tempInt);
}
Integer Integer::operator*=(const Integer& _add)
{
	int tempInt = this->x * _add.x;
	return (tempInt);
}
Integer Integer::operator/(const Integer& _add)
{
	int tempInt = this->x / _add.x;
	return (tempInt);
}
Integer Integer::operator/=(const Integer& _add)
{
	int tempInt = this->x / _add.x;
	return (tempInt);
}
Integer Integer::operator%(const Integer& _add)
{
	int tempInt = this->x % _add.x;
	return (tempInt);
}
Integer Integer::operator%=(const Integer& _add)
{
	int tempInt = this->x % _add.x;
	return (tempInt);
}

std::ostream& operator<<(std::ostream& os, const Integer& _myInt)
{
	os << "X : " << _myInt.x << '\n';
	return os;
}

//for float

Integer Integer::operator+(const float _add)
{
	int tempInt = this->x + static_cast<int>(std::round(_add));
	return (tempInt);
}

Integer Integer::operator+=(const float _add)
{
	int tempInt = this->x + static_cast<int>(std::round(_add));
	return (tempInt);
}
Integer Integer::operator-(const float _add)
{
	int tempInt = this->x - static_cast<int>(std::round(_add));
	return (tempInt);
}
Integer Integer::operator-=(const float _add)
{
	int tempInt = this->x - static_cast<int>(std::round(_add));
	return (tempInt);
}
Integer Integer::operator*(const float _add)
{
	int tempInt = this->x * static_cast<int>(std::round(_add));
	return (tempInt);
}
Integer Integer::operator*=(const float _add)
{
	int tempInt = this->x * static_cast<int>(std::round(_add));
	return (tempInt);
}
Integer Integer::operator/(const float _add)
{
	int tempInt = this->x / static_cast<int>(std::round(_add));
	return (tempInt);
}
Integer Integer::operator/=(const float _add)
{
	int tempInt = this->x / static_cast<int>(std::round(_add));
	return (tempInt);
}
Integer Integer::operator%(const float _add)
{
	int tempInt = this->x % static_cast<int>(std::round(_add));
	return (tempInt);
}
Integer Integer::operator%=(const float _add)
{
	int tempInt = this->x % static_cast<int>(std::round(_add));
	return (tempInt);
}

int Integer::pow(int _myInt, int _pow)
{
	for (int i = 0; i < _pow; i++)
		_myInt *= _myInt;
	return (_myInt);
}
float Integer::pow(float _myFloat, int _pow)
{
	for (int i = 0; i < _pow; i++)
		_myFloat *= _myFloat;
	return (_myFloat);
}