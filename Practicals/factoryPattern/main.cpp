#include "Factory.h"
#include "CharacterFactory.h"
#include <iostream>
#include <vector>


int main() {
	Factory* factory = new CharacterFactory;
	std::vector<Character*> characters;
	characters.push_back(factory->CreatePlayer());
	characters.push_back(factory->CreateEnemy());

	for (int i = 0; i < characters.size(); i++) {
		characters[i]->draw();
	}
	system("PAUSE");
}