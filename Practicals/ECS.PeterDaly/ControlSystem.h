#ifndef CONTROLSYSTEM_H
#define CONTROLSYSTEM_H

#include <iostream>
#include <vector>
#include "Entity.h"

class ControlSystem
{
	std::vector<Entity *> m_entities;

public:
	ControlSystem() {}
	void addEntity(Entity * e) {
		m_entities.push_back(e);
	}
	void update() {
		std::cout << "Updating Control System with " << m_entities.size() << " entities" << std::endl;
	}
};
#endif // !CONTROLSYSTEM_H
