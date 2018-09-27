#ifndef MACROCOMMAND_H
#define MACROCOMMAND_H

#include <iostream>
#include "Command.h"
#include <list>

class MacroCommand : public Command
{
public:
	MacroCommand();
	~MacroCommand() {}
	virtual void add(Command* command);
	virtual void remove(Command* command);
	virtual void Execute();

private:
	std::list<Command*> m_commands;
};
#endif // !MACROCOMMAND_H


