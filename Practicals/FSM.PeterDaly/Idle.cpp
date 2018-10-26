#include "Idle.h"
#include "Jumping.h"
#include "Climbing.h"

Idle::Idle() {

}

void Idle::jumping(Animation* a, SDL_Rect * rect) {
	cout << "Going from idle to jumping" << endl;
	rect->y = 50;
	a->setCurrent(new Jumping());
	delete this;
}

void Idle::climbing(Animation* a, SDL_Rect * rect) {
	cout << "Going from idle to climbing" << endl;
	rect->y = 100;
	a->setCurrent(new Climbing());
	delete this;
}
