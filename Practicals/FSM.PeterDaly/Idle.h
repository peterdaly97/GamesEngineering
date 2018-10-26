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

	void jumping(Animation* a, SDL_Rect * rect);
	void climbing(Animation* a, SDL_Rect * rect);
};
#endif // !IDLE_H
