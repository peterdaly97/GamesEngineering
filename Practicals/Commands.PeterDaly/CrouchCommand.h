#ifndef CROUCHCOMMAND_H
#define CROUCHCOMMAND_H

#include <iostream>
#include "Command.h"

class CrouchCommand : public Command
{
public:
	virtual void Execute() { std::cout << "Crouch" << std::endl; }
};
#endif // !CROUCHCOMMAND_H

