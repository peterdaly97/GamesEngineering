#include "MacroCommand.h"

MacroCommand::MacroCommand() {
	m_undo = false;
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

void MacroCommand::Undo() {
	if (m_commands.size() > 0) {
		m_undoCommands.push_back(m_commands.back());
		m_commands.pop_back();
	}
}

void MacroCommand::Redo() {
	if (m_undoCommands.size() > 0) {
		m_commands.push_back(m_undoCommands.back());
		m_undoCommands.pop_back();
	}
}