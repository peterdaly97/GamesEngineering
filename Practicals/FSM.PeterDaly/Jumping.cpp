#include "Jumping.h"
#include "Climbing.h"
#include "Idle.h"

Jumping::Jumping() {

}

void Jumping::idle(Animation* a, SDL_Rect * rect) {
	cout << "Going from jumping to idle" << endl;
	rect->y = 0;
	a->setCurrent(new Idle());
	delete this;
}

void Jumping::climbing(Animation* a, SDL_Rect * rect) {
	cout << "Going from jumping to climbing" << endl;
	rect->y = 100;
	a->setCurrent(new Climbing());
	delete this;
}

