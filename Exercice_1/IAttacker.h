#ifndef __IATTACKER_H__
#define __IATTACKER_H__
#include "Alive.h"

class IAttacker
{
public:
	virtual void attack(Alive& playerOne) = 0;
};

#endif
