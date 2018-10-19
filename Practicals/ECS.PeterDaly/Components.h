#ifndef COMPONENTS_H
#define COMPONENTS_H

enum COMPONENTTYPE
{
	RENDER,
	HEALTH,
	POSITION,
	AI,
	CONTROL
};

class Component
{
public:
	Component() {};

	virtual COMPONENTTYPE getType() { return COMPONENTTYPE::AI; }
};
#endif // !COMPONENTS_H

