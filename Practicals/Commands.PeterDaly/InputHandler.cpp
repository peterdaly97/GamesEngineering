#include "InputHandler.h"

InputHandler::InputHandler()
{
	buttonA_ = new CrouchCommand();
	buttonB_ = new JumpCommand();
	buttonX_ = new FireCommand();
	buttonY_ = new ShieldCommand();
	buttonZ_ = new MeleeCommand();
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
		case SDLK_x:
			buttonX_->Execute();
			break;
		case SDLK_y:
			buttonY_->Execute();
			break;
		case SDLK_b:
			buttonB_->Execute();
			break;
		case SDLK_a:
			buttonA_->Execute();
			break;
		case SDLK_z:
			buttonZ_->Execute();
			break;
		}
	}
}