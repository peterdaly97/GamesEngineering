#ifndef FIRECOMMAND_H
#define FIRECOMMAND_H

#include <iostream>
#include "Command.h"

class FireCommand : public Command
{
public:
	virtual void Execute() { std::cout << "Fire" << std::endl; }
};
#endif // !FIRECOMMAND_H

