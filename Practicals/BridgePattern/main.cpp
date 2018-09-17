#include <iostream>
#include "Character.h"



int main() {
	DrawAPI* api = new DrawImpl();
	Character* character = new Player(api);
	character->Draw();
	system("PAUSE");
}