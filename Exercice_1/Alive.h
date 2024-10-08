#ifndef __ALIVE_H__
#define __ALIVE_H__

class Alive
{
public:
	float maxLife;
	float actualLife;

	Alive(float maxLife);

	virtual float getMaxLife();
	virtual float getActualLife();
	virtual void takeDamage(float damage);

	~Alive();
};

#endif
