#include "include.h"

int	main(void)
{
	Vector2* mySimpleVector = new Vector2;
	Vector2* mySettedVector = new Vector2(2.f, 10.f);
	Vector2 myOperatorVector = Vector2(44.f, 88.f);
	Vector2 test = Vector2(1.f, 1.f);

	Vector2	mySumVector = myOperatorVector + test;

	std::cout << mySumVector;
	
	return (0);
}