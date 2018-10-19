#ifndef CONTROLCOMPONENT_H
#define CONTROLCOMPONENT_H

#include "Components.h"

class ControlComponent : public Component
{
public:
	ControlComponent() {}

	COMPONENTTYPE getType() { return type; }
private:
	
	COMPONENTTYPE type = COMPONENTTYPE::CONTROL;

};
#endif // !CONTROLCOMPONENT_H
