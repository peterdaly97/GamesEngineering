#ifndef STATE_H
#define STATE_H

#include "Animation.h"

#include <iostream>
#include <SDL.h>

using namespace std;

class State
{
public:
	virtual void idle(Animation* a, SDL_Rect * rect) {
		cout << "State::Idling" << endl;
	}

	virtual void jumping(Animation* a, SDL_Rect * rect) {
		cout << "State::Jumping" << endl;
	}

	virtual void climbing(Animation* a, SDL_Rect * rect) {
		cout << "State::Climbing" << endl;
	}
};
#endif // !STATE_H

