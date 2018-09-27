#ifndef MELEECOMMAND_H
#define MELEECOMMAND_H

#include <iostream>
#include "Command.h"

class MeleeCommand : public Command
{
public:
	virtual void Execute() { std::cout << "Melee" << std::endl; }
};
#endif // !MELEECOMMAND_H

