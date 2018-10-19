#ifndef HEALTHCOMPONENT_H
#define HEALTHCOMPONENT_H

#include "Components.h"

class HealthComponent : public Component
{
public:
	HealthComponent() : health(100) {}

	int getHealth() { return health; }
	void setHealth(int health) { this->health = health; }

	COMPONENTTYPE getType() { return type; }

private:
	int health;
	COMPONENTTYPE type = COMPONENTTYPE::HEALTH;
};
#endif // !HEALTHCOMPONENT_H