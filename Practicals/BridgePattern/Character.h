#ifndef CHARACTER_H
#define CHARACTER_H

#include "DrawAPI.h"

class Character
{
public:
	virtual void Draw() = 0;
};

class Player : public Character
{
public:
	Player(DrawAPI* api) { this->api = api; }
	void Draw() { api->Draw(); }

private:
	DrawAPI * api;
};
#endif // !CHARACTER_H
