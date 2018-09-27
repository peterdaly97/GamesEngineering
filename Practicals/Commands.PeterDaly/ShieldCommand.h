#ifndef SHIELDCOMMAND_H
#define SHIELDCOMMAND_H

#include <iostream>
#include "Command.h"

class ShieldCommand : public Command
{
public:
	virtual void Execute() { std::cout << "Shield" << std::endl; }
};
#endif // !SHIELDCOMMAND_H

