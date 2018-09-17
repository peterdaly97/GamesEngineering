#ifndef DRAWAPI_H
#define DRAWAPI_H

#include <iostream>

class DrawAPI
{
public:
	virtual void Draw() = 0;
};


class DrawImpl : public DrawAPI
{
public:
	void Draw() {
		std::cout << "Draw Impl" << std::endl;
		
	}
};
#endif // !DRAWAPI_H
