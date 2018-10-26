#ifndef ANIMATION_H
#define ANIMATION_H

class State;

#include <SDL.h>
#include <iostream>

class Animation
{
	
public:
	Animation();
	~Animation();

	void setCurrent(State* s);
	void execute(SDL_Rect * rect, std::string type);
	/*void idle(SDL_Rect * rect);
	void jumping(SDL_Rect * rect);
	void climbing(SDL_Rect * rect);*/

	State* m_current;

};
#endif // !ANIMATION_H

