#ifndef CONTROLSYSTEM_H
#define CONTROLSYSTEM_H

#include <iostream>
#include <vector>
#include "Entity.h"

class ControlSystem
{
	std::vector<Entity *> m_entities;

public:
	ControlSystem();
	void addEntity(Entity * e);
	void update();
};
#endif // !CONTROLSYSTEM_H
