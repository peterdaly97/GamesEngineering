#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include "Command.h"
#include "CrouchCommand.h"
#include "FireCommand.h"
#include "JumpCommand.h"
#include "MeeleeCommand.h"
#include "ShieldCommand.h"
#include "MacroCommand.h"
#include <SDL.h>

class InputHandler
{
public:
	InputHandler();
	~InputHandler();
	void handleInput(SDL_Event & event);

private:
	Command * buttonX_;
	Command * buttonY_;
	Command * buttonA_;
	Command * buttonB_;
	Command * buttonZ_;
	MacroCommand * macro;
};
#endif // !INPUTHANDLER_H

