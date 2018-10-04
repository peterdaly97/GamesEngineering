#ifndef IDLE_H
#define IDLE_H

#include "State.h"
#include <iostream>

using namespace std;

class Idle : public State
{
public:
	Idle();
	~Idle() {}

	void jumping(Animation* a);
	void climbing(Animation* a);
};
#endif // !IDLE_H
