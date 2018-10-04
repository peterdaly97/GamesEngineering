#include "Climbing.h"
#include "Idle.h"
#include "Jumping.h"

Climbing::Climbing() {

}

void Climbing::idle(Animation* a) {
	cout << "Going from climbing to idle" << endl;
	a->setCurrent(new Idle());
	delete this;
}

void Climbing::jumping(Animation* a) {
	cout << "Going from climbing to jumping" << endl;
	a->setCurrent(new Jumping());
	delete this;
}