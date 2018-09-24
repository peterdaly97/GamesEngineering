#include <iostream>
#include "GraphicProxyh.h"
using namespace std;

GraphicProxy::GraphicProxy() {
	this->graphic = 0;
}

GraphicProxy::~GraphicProxy() {
	if (graphic)
		delete graphic;
}

Graphic* GraphicProxy::getInstance(void) {
	if (!graphic)
		graphic = new Graphic();
	return graphic;
}

void GraphicProxy::Draw()
{
	getInstance()->Draw();
}