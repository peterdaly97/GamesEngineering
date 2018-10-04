#include "InputHandler.h"

InputHandler::InputHandler()
{
	animationState = new Animation();
}

InputHandler::~InputHandler()
{
	
}

void InputHandler::handleInput(SDL_Event & event)
{
	switch (event.type)
	{
	case SDL_KEYDOWN:
		switch (event.key.keysym.sym)
		{
		case SDLK_i:
			animationState->idle();
			break;
		case SDLK_j:
			animationState->jumping();
			break;
		case SDLK_c:
			animationState->climbing();
			break;
		}
	}
}