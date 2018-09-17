#ifndef FACTORY_H
#define FACTORY_H

#include "Character.h"

class Factory {
public:
	virtual Character* CreatePlayer() = 0;
	virtual Character* CreateEnemy() = 0;
};

#endif // !FACTORY_H

