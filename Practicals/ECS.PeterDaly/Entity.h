#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>
#include <vector>
#include "AIComponent.h"
#include "ControlComponent.h"
#include "GraphicsComponent.h"
#include "HealthComponents.h"
#include "PositionComponent.h"

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

	Component * getCompByType(COMPONENTTYPE type) {
		for (Component * comp : m_components) {
			if (comp->getType() == type) {
				return comp;
			}
		}
	}
private:
	std::vector<Component*> m_components;
};
#endif // !ENTITY_H
