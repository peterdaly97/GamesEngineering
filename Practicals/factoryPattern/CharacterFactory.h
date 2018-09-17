#ifndef CHARACTERFACTORY_H
#define CHARACTERFACTORY_H

#include "Factory.h"

class CharacterFactory : public Factory {
public:
	Character * CreatePlayer() {
		return new Player;
	}

	Character * CreateEnemy() {
		return new Enemy;
	}
};

#endif // !CHARACTERFACTORY_H

