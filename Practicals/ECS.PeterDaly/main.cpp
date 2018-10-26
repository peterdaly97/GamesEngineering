#include <iostream>
#include "HealthSystem.h"
#include "ControlSystem.h"
#include "RenderSystem.h"
#include "AISystem.h"


int main(int argc, char* argv[]) {
	bool quit = false;
	SDL_Event event;
	Entity * player = new Entity();
	Entity * alien = new Entity();
	Entity * dog = new Entity();
	Entity * cat = new Entity();

	player->addComponent(new HealthComponent());
	player->addComponent(new PositionComponent(300, 100));
	player->addComponent(new ControlComponent());
	player->addComponent(new GraphicComponent("human.png", 200, 200));

	alien->addComponent(new HealthComponent());
	alien->addComponent(new PositionComponent(1250, 100));
	alien->addComponent(new AIComponent(1));
	alien->addComponent(new GraphicComponent("alien.png", 200, 200));

	dog->addComponent(new HealthComponent());
	dog->addComponent(new PositionComponent(300, 650));
	dog->addComponent(new AIComponent(2));
	dog->addComponent(new GraphicComponent("dog.png", 200, 200));

	cat->addComponent(new HealthComponent());
	cat->addComponent(new PositionComponent(1250, 650));
	cat->addComponent(new AIComponent(2));
	cat->addComponent(new GraphicComponent("cat.jpg", 200, 200));
	
	HealthSystem hs;
	hs.addEntity(player);
	hs.addEntity(alien);
	hs.addEntity(dog);
	hs.addEntity(cat);

	ControlSystem cs;
	cs.addEntity(player);

	RenderSystem rs;
	rs.addEntity(player);
	rs.addEntity(alien);
	rs.addEntity(dog);
	rs.addEntity(cat);

	AISystem as;
	as.addEntity(alien);
	as.addEntity(dog);
	as.addEntity(cat);

	while (!quit) {
		hs.update();
		rs.update();
		as.update();
		while (SDL_PollEvent(&event)) {
			cs.update();
		}
	}

	system("PAUSE");
	return 0;
}