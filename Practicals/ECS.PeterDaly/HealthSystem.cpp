#include "HealthSystem.h"

HealthSystem::HealthSystem() {

}

void HealthSystem::addEntity(Entity * e) {
	m_entities.push_back(e);
}

void HealthSystem::update() {
	cout << "Updating Health System with " << m_entities.size() << " entities" << std::endl;

}

