#include "RenderSystem.h"

RenderSystem::RenderSystem() {
	//The surface contained by the window
	SDL_Surface* screenSurface = NULL;

	sourceRect.x = 0;
	sourceRect.y = 0;
	sourceRect.w = 300;
	sourceRect.h = 300;

	destRect.x = 0;
	destRect.y = 0;
	destRect.w = 200;
	destRect.h = 200;

	//Initialize SDL
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
	}
	else
	{
		//Create window
		Window = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (Window == NULL)
		{
			printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());

		}
		else
		{
			//Create renderer for window
			Renderer = SDL_CreateRenderer(Window, -1, SDL_RENDERER_ACCELERATED);
			if (Renderer == NULL)
			{
				printf("Renderer could not be created! SDL Error: %s\n", SDL_GetError());

			}
			else
			{
				//Initialize renderer color
				SDL_SetRenderDrawColor(Renderer, 0xFF, 0xFF, 0xFF, 0xFF);

				//Initialize PNG loading
				int imgFlags = IMG_INIT_PNG;
				if (!(IMG_Init(imgFlags) & imgFlags))
				{
					printf("SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError());

				}
			}
		}
	}
	Texture = loadTexture("grid.png");
}

void RenderSystem::addEntity(Entity * e) {
	m_entities.push_back(e);
}

void RenderSystem::update() {
	//Clear screen
	SDL_RenderClear(Renderer);

	for (Entity * entity : m_entities) {
		//Render texture to screen
		std::vector<Component*> comps = entity->getComponents();
		for (Component * comp : comps) {

			if (comp->getType() == COMPONENTTYPE::POSITION) {
				PositionComponent * pComp = static_cast<PositionComponent *> (comp);
				destRect.x = pComp->getX();
				destRect.y = pComp->getY();
			}

			if (comp->getType() == COMPONENTTYPE::RENDER) {
				GraphicComponent * gComp = static_cast<GraphicComponent *> (comp);
				//Texture = loadTexture(gComp->getTexturePath());
				destRect.w = gComp->getW();
				destRect.h = gComp->getH();
			}


		}
		SDL_RenderCopy(Renderer, Texture, &sourceRect, &destRect);
		//Update screen
		SDL_RenderPresent(Renderer);
	}



}

SDL_Texture * RenderSystem::loadTexture(std::string path) {
	//The final texture
	SDL_Texture* newTexture = NULL;

	//Load image at specified path
	SDL_Surface* loadedSurface = IMG_Load(path.c_str());
	if (loadedSurface == NULL)
	{
		printf("Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError());
	}
	else
	{
		//Create texture from surface pixels
		newTexture = SDL_CreateTextureFromSurface(Renderer, loadedSurface);
		if (newTexture == NULL)
		{
			printf("Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError());
		}

		//Get rid of old loaded surface
		SDL_FreeSurface(loadedSurface);
	}

	return newTexture;
}
