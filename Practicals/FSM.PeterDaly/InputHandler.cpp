#include "InputHandler.h"

InputHandler::InputHandler()
{
	animationState = new Animation();
}

InputHandler::~InputHandler()
{
	
}

void InputHandler::handleInput(SDL_Event & event, SDL_Rect * rect)
{
	switch (event.type)
	{
	case SDL_KEYDOWN:
		switch (event.key.keysym.sym)
		{
		case SDLK_i:
			animationState->idle();
			rect->y = 0;
			break;
		case SDLK_j:
			animationState->jumping();
			rect->y = 50;
			break;
		case SDLK_c:
			animationState->climbing();
			rect->y = 100;
			break;
		}
	}
}