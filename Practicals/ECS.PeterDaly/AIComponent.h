#ifndef AICOMPONENT_H
#define AICOMPONENT_H

#include "Components.h"

class AIComponent : public Component
{
public:
	AIComponent(int speed) : m_speed(speed) {}

	int getSpeed() { return m_speed; }
	void setSpeed(int speed) { m_speed = speed; }
private:
	int m_speed;
};
#endif // !CONTROLCOMPONENT_H
