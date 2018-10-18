#ifndef RENDERSYSTEM_H
#define RENDERSYSTEM_H

#include <iostream>
#include <vector>
#include "Entity.h"
#include <SDL_image.h>
#include <string>

class RenderSystem
{
	std::vector<Entity *> m_entities;

public:
	RenderSystem();
	void addEntity(Entity * e);
	void update();

private:
	//Screen dimension constants
	const int SCREEN_WIDTH = 640;
	const int SCREEN_HEIGHT = 480;

	//Loads individual image as texture
	SDL_Texture* loadTexture(std::string path);

	//The window we'll be rendering to
	SDL_Window* Window = NULL;

	//The window renderer
	SDL_Renderer* Renderer = NULL;

	//Current displayed texture
	SDL_Texture* Texture = NULL;

	SDL_Rect sourceRect;
	SDL_Rect destRect;
};
#endif // !RENDERSYSTEM_H
