#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>
#include <vector>
#include "Components.h"

class Entity
{
public:
	Entity() {}
	void addComponent(Component * newComp) {
		m_components.push_back(newComp);
	}

	void removeComponent(Component * removeComp) {

	}

	std::vector<Component*> getComponents() {
		return m_components;
	}
private:
	std::vector<Component*> m_components;
};
#endif // !ENTITY_H
