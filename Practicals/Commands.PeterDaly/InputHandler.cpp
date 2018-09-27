#include "InputHandler.h"

InputHandler::InputHandler()
{
	buttonA_ = new CrouchCommand();
	buttonB_ = new JumpCommand();
	buttonX_ = new FireCommand();
	buttonY_ = new ShieldCommand();
	buttonZ_ = new MeleeCommand();
	macro = new MacroCommand();
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
			macro->add(buttonX_);
			break;
		case SDLK_y:
			buttonY_->Execute();
			macro->add(buttonY_);
			break;
		case SDLK_b:
			buttonB_->Execute();
			macro->add(buttonB_);
			break;
		case SDLK_a:
			buttonA_->Execute();
			macro->add(buttonA_);
			break;
		case SDLK_z:
			buttonZ_->Execute();
			macro->add(buttonZ_);
			break;
		case SDLK_1:
			macro->Execute();
			break;
		}
	}
}