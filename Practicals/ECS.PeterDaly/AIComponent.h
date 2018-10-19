#ifndef AICOMPONENT_H
#define AICOMPONENT_H

#include "Components.h"

class AIComponent : public Component
{
public:
	AIComponent(int speed) : m_speed(speed) {}

	int getSpeed() { return m_speed; }
	void setSpeed(int speed) { m_speed = speed; }

	COMPONENTTYPE getType() { return type; }

private:
	int m_speed;

	COMPONENTTYPE type = COMPONENTTYPE::AI;
};
#endif // !CONTROLCOMPONENT_H
