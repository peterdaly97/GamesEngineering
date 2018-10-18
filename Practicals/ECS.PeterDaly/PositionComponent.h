#ifndef POSITIONCOMPONENT_H
#define POSITIONCOMPONENT_H

#include "Components.h"
#include <SDL.h>

class PositionComponent : public Component
{
public:
	PositionComponent(int x, int y) : x(x), y(y){}

	int getX() { return x; }
	int getY() { return y; }


	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }

private:
	int x;
	int y;
};
#endif // !POSITIONCOMPONENT_H
