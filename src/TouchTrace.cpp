#include "TouchTrace.h"

#include "TouchPoint.h"

#include "ThirdStudyApp.h"

using namespace ci;
using namespace ci::app;

ThirdStudy::TouchTrace::TouchTrace() {
	state = State::TOUCH_DOWN;
	isVisible = true;
	widgetId = 0;
	_lifespan = FPS/6;
}

ThirdStudy::TouchTrace::~TouchTrace() {
	touchPoints.clear();
}

int ThirdStudy::TouchTrace::getSessionId() {
	return touchPoints.back().getSessionId();
}

Vec2f ThirdStudy::TouchTrace::currentPosition() {
	return touchPoints.back().getPos();
}

Vec2f ThirdStudy::TouchTrace::previousPosition() {
	if(touchPoints.size() > 1) {
		return prev(touchPoints.end(), 2)->getPos();
	} else {
		return currentPosition();
	}
}

int ThirdStudy::TouchTrace::lifespan() {
	return _lifespan;
}

bool ThirdStudy::TouchTrace::isDead() {
	return _lifespan == 0;
}

void ThirdStudy::TouchTrace::update() {
	if(!isVisible) {
		_lifespan--;
	}
}

void ThirdStudy::TouchTrace::resurrect() {
	_lifespan = FPS/6;
	isVisible = true;
}

bool ThirdStudy::TouchTrace::isOnWidget() {
	return widgetId != 0;
}

// TODO State info should be added to the cursors
void ThirdStudy::TouchTrace::addCursorDown(ThirdStudy::TouchPoint p) {
	touchPoints.push_back(p);
	state = State::TOUCH_DOWN;
}

void ThirdStudy::TouchTrace::cursorMove(ThirdStudy::TouchPoint p) {
	touchPoints.push_back(p);
	
	if(p.getSpeed().length() < 0.025f) {
		state = State::TOUCH_STILL;
	} else {
		state = State::TOUCH_MOVING;
	}
}

void ThirdStudy::TouchTrace::addCursorUp(ThirdStudy::TouchPoint p) {
	touchPoints.push_back(p);
	state = State::TOUCH_UP;
}