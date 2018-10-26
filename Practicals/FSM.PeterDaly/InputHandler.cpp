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
			animationState->execute(rect, "idle");
			break;
		case SDLK_j:
			animationState->execute(rect, "jumping");
			break;
		case SDLK_c:
			animationState->execute(rect, "climbing");
			break;
		}
	}
}