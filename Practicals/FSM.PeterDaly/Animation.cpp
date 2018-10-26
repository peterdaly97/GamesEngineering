#include "Animation.h"
#include "Idle.h"

Animation::Animation() {
	m_current = new Idle();
}

Animation::~Animation() {

}

void Animation::execute(SDL_Rect * rect, std::string type) {
	if(type == "climbing") 
		m_current->climbing(this, rect);
	else if("jumping")
		m_current->jumping(this, rect);
	else
		m_current->idle(this, rect);
}

//void Animation::idle(SDL_Rect * rect) {
//	m_current->idle(this, rect);
//}
//
//void Animation::jumping(SDL_Rect * rect) {
//	m_current->jumping(this, rect);
//}
//
//void Animation::climbing(SDL_Rect * rect) {
//	m_current->climbing(this, rect);
//}
//


void Animation::setCurrent(State* s) {
	m_current = s;
}