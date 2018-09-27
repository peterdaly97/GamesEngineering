#include "MacroCommand.h"

MacroCommand::MacroCommand() {

}

void MacroCommand::add(Command* command) {
	m_commands.push_back(command);
}

void MacroCommand::remove(Command* command) {
	m_commands.remove(command);
}

void MacroCommand::Execute() {
	std::list<Command*>::iterator iter;

	for (iter = m_commands.begin(); iter != m_commands.end(); ++iter) {
		(*iter)->Execute();
	}
	
}