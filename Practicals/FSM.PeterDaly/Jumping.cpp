#include "Jumping.h"
#include "Climbing.h"
#include "Idle.h"

Jumping::Jumping() {

}

void Jumping::idle(Animation* a) {
	cout << "Going from jumping to idle" << endl;
	a->setCurrent(new Idle());
	delete this;
}

void Jumping::climbing(Animation* a) {
	cout << "Going from jumping to climbing" << endl;
	a->setCurrent(new Climbing());
	delete this;
}

