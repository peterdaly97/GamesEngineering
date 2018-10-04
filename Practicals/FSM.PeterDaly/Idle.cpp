#include "Idle.h"
#include "Jumping.h"
#include "Climbing.h"

Idle::Idle() {

}

void Idle::jumping(Animation* a) {
	cout << "Going from idle to jumping" << endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Idle::climbing(Animation* a) {
	cout << "Going from idle to climbing" << endl;
	a->setCurrent(new Climbing());
	delete this;
}
