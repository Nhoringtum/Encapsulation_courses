#include "include.h"

int	main(void)
{
	Vector2* mySimpleVector = new Vector2;
	Vector2* mySettedVector = new Vector2(2.f, 10.f);
	Vector2 myOperatorVector = Vector2(44.f, 88.f);
	Vector2 test = Vector2(1.f, 1.f);

	Vector2	mySumVector = myOperatorVector + test;

	Integer myInt;
	Integer myCustomInt(8);
	Integer myCustomFloatToInt(15.f);

	std::cout << myInt;
	std::cout << myCustomInt;
	std::cout << myCustomFloatToInt + myCustomInt;

	std::cout << mySumVector;
	
	return (0);
}