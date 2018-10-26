#include "AISystem.h"

AISystem::AISystem() {

}

void AISystem::addEntity(Entity * e) {
	m_entities.push_back(e);
}

void AISystem::update() {
	cout << "Updating AI System with " << m_entities.size() << " entities" << std::endl;

}

