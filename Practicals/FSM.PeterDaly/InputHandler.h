#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include "State.h"
#include <SDL.h>

class InputHandler
{
public:
	InputHandler();
	~InputHandler();
	void handleInput(SDL_Event & event);

private:
	Animation * animationState;
};
#endif // !INPUTHANDLER_H

