#ifndef JUMPCOMMAND_H
#define JUMPCOMMAND_H

#include <iostream>
#include "Command.h"

class JumpCommand : public Command
{
public:
	virtual void Execute() { std::cout << "Jump" << std::endl; }
};
#endif // !JUMPCOMMAND_H

