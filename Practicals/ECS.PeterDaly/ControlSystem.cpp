#include "ControlSystem.h"

ControlSystem::ControlSystem() {

}

void ControlSystem::addEntity(Entity * e) {
	m_entities.push_back(e);
}

void ControlSystem::update() {
	cout << "Updating Control System with " << m_entities.size() << " entities" << std::endl;
	
}

