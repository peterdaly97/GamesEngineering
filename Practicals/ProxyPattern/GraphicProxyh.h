#ifndef GRAPHICPROXY_H
#define GRAPHICPROXY_H

#include "IGraphic.h"
#include "Graphic.h"

class GraphicProxy : public IGraphic
{
public:
	GraphicProxy();
	~GraphicProxy();
	void Draw();

private:
	Graphic * graphic;
	Graphic* getInstance(void);
};
#endif // !GRAPHICPROXY_H


