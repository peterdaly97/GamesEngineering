#ifndef ANIMATION_H
#define ANIMATION_H

class State;

class Animation
{
	
public:
	Animation();
	~Animation();

	void setCurrent(State* s);
	void idle();
	void jumping();
	void climbing();

	State* m_current;

};
#endif // !ANIMATION_H

