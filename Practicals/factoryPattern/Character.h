#ifndef CHARACTER_H
#define CHARACTER_H

#include "Factory.h"
#include <iostream>

class Character{
public:
	Character() {}
	virtual ~Character() {}
	virtual void draw() = 0;
};

class Player : public Character {
public:
	void draw() {
		std::cout << "Draw Player" << std::endl;
	}
};

class Enemy : public Character {
public:
	void draw() {
		std::cout << "Draw Enemy" << std::endl;
	}
};

#endif // !CHARACTER_H

