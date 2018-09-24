#ifndef GRAPHIC_H
#define GRAPHIC_H

#include "IGraphic.h"
#include <iostream>

class Graphic : public IGraphic
{
public:
	Graphic() {}
	~Graphic() {}
	void Draw() {
		std::cout << "Drawing Graphic Object" << std::endl;
	}
};
#endif // !GRAPHIC_H


