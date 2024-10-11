#include "include.h"

int	main(void)
{
	Vector2 myVectMob(1.f, 1.f);
	Vector2 myVectPlayerOne(2.f, 2.f);

	StaticObject* myStaticObject = new StaticObject(5.f, 5.f);
	BreakableObject* myBreakableObject = new BreakableObject(5.f, 5.f, 10.f, 10.f);
	Mob* myMob = new Mob(0.f, 0.f, 10.f, 10.f, myVectMob, 1.f);
	Player* playerOne = new Player(20.f, 20.f, 10.f, 10.f, myVectPlayerOne);
	return (0);
}