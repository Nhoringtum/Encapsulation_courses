#include "include.h"

int	main(void)
{
	Vector2 myVectMob(1.f, 1.f);
	Vector2 myVectPlayerOne(2.f, 2.f);

	StaticObject* myStaticObject = new StaticObject(5.f, 5.f);
	BreakableObject* myBreakableObject = new BreakableObject(5.f, 5.f, 10.f, 10.f);
	Mob* myMob = new Mob(0.f, 0.f, 10.f, 10.f, myVectMob, 1.f);
	Alive* myAlive = new Alive();
	Player* playerOne = new Player(20.f, 20.f, 10.f, 10.f, myVectPlayerOne);

	std::cout << "myStaticObject coord : x = " << myStaticObject->getCoordX() << " and y = " << myStaticObject->getCoordY() << std::endl;
	myStaticObject->setCoordXY(0.f, 0.f);
	std::cout << "myStaticObject coord : x = " << myStaticObject->getCoordX() << " and y = " << myStaticObject->getCoordY() << std::endl;
	myBreakableObject->takeDamage(10.f);
	myMob->move();
	myMob->takeDamage(.5f);
	playerOne->attack(*myAlive);
	playerOne->move();
	playerOne->takeDamage(.5f);
	
	
	
	return (0);
}