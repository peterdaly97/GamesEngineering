#include <iostream>
#include "HealthSystem.h"
#include "ControlSystem.h"
#include "RenderSystem.h"
#include "AISystem.h"

//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

//The window we'll be rendering to
SDL_Window* gWindow = NULL;

//The window renderer
SDL_Renderer* gRenderer = NULL;



void initScreen() {

	//The surface contained by the window
	SDL_Surface* screenSurface = NULL;

	//Initialize SDL
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
	}
	else
	{
		//Create window
		gWindow = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (gWindow == NULL)
		{
			printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());

		}
		else
		{
			//Create renderer for window
			gRenderer = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED);
			if (gRenderer == NULL)
			{
				printf("Renderer could not be created! SDL Error: %s\n", SDL_GetError());

			}
			else
			{
				//Initialize renderer color
				SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);

				//Initialize PNG loading
				int imgFlags = IMG_INIT_PNG;
				if (!(IMG_Init(imgFlags) & imgFlags))
				{
					printf("SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError());

				}
			}
		}
	}

	//Clear screen
	SDL_RenderClear(gRenderer);

	//Update screen
	SDL_RenderPresent(gRenderer);
	
}


int main(int argc, char* argv[]) {

	initScreen();

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
	alien->addComponent(new AIComponent(1));
	alien->addComponent(new PositionComponent(1250, 100));
	alien->addComponent(new GraphicComponent("alien.png", 200, 200));

	dog->addComponent(new HealthComponent());
	dog->addComponent(new AIComponent(2));
	dog->addComponent(new PositionComponent(300, 650));
	dog->addComponent(new GraphicComponent("dog.png", 200, 200));

	cat->addComponent(new HealthComponent());
	cat->addComponent(new AIComponent(3));
	cat->addComponent(new PositionComponent(1250, 650));
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
		as.update();
		SDL_PollEvent(&event);
		cs.update(event);
		
		rs.update();
	}

	system("PAUSE");
	return 0;
}