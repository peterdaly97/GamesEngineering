#ifndef CLIMBING_H
#define CLIMBING_H

#include "State.h"
#include <iostream>
using namespace std;

class Climbing : public State
{
public:
	Climbing();
	~Climbing() {}

	void idle(Animation* a, SDL_Rect * rect);

	void jumping(Animation* a, SDL_Rect * rect);
};
#endif // !CLIMBING_H

