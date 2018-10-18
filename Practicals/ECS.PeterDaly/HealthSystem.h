#ifndef HEALTHSYSTEM_H
#define HEALTHSYSTEM_H

#include <iostream>
#include <vector>
#include "Entity.h"

class HealthSystem
{
	std::vector<Entity *> m_entities;

public:
	HealthSystem() {}
	void addEntity(Entity * e) {
		m_entities.push_back(e);
	}
	void update() {
		std::cout << "Updating Health System with " << m_entities.size() << " entities" << std::endl;
	}
};
#endif // !HEALTHSYSTEM_H
