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
	player->addComponent(new PositionComponent(0, 100));
	player->addComponent(new ControlComponent());
	player->addComponent(new GraphicComponent("grid.png", 200, 200));

	alien->addComponent(new HealthComponent());
	alien->addComponent(new PositionComponent(250, 100));
	alien->addComponent(new AIComponent(1));
	player->addComponent(new GraphicComponent("grid.png", 200, 200));

	dog->addComponent(new HealthComponent());
	dog->addComponent(new PositionComponent(1200, 100));
	dog->addComponent(new AIComponent(2));

	cat->addComponent(new HealthComponent());
	cat->addComponent(new PositionComponent(100, 800));
	cat->addComponent(new AIComponent(2));
	
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
	//rs.addEntity(dog);
	//rs.addEntity(cat);

	AISystem as;
	as.addEntity(alien);
	as.addEntity(dog);
	as.addEntity(cat);

	while (!quit) {
		hs.update();
		cs.update();
		rs.update();
		as.update();
		while (SDL_PollEvent(&event)) {
			
		}
	}

	system("PAUSE");
	return 0;
}