#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include "State.h"
#include <SDL.h>

class InputHandler
{
public:
	InputHandler();
	~InputHandler();
	void handleInput(SDL_Event & event, SDL_Rect * rect);

private:
	Animation * animationState;
};
#endif // !INPUTHANDLER_H

