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
	void Undo();
	void Redo();
private:
	std::list<Command*> m_commands;
	std::list<Command*> m_undoCommands;
	bool m_undo;
};
#endif // !MACROCOMMAND_H


