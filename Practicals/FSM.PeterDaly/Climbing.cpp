#include "Climbing.h"
#include "Idle.h"
#include "Jumping.h"

Climbing::Climbing() {

}

void Climbing::idle(Animation* a, SDL_Rect * rect) {
	cout << "Going from climbing to idle" << endl;
	rect->y = 0;
	a->setCurrent(new Idle());
	delete this;
}

void Climbing::jumping(Animation* a, SDL_Rect * rect) {
	cout << "Going from climbing to jumping" << endl;
	rect->y = 50;
	a->setCurrent(new Jumping());
	delete this;
}