#ifndef JUMPING_H
#define JUMPING_H

#include "State.h"
#include <iostream>
using namespace std;

class Jumping : public State
{
public:
	Jumping();
	~Jumping() {}

	void idle(Animation* a, SDL_Rect * rect);
	void climbing(Animation* a, SDL_Rect * rect);
};
#endif // !JUMPING_H

