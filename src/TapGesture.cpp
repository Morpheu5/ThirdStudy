#include "TapGesture.h"

using namespace ci;

ThirdStudy::TapGesture::TapGesture() : _position(Vec2f(0.0f, 0.0f)), _widgetId(0) { }
ThirdStudy::TapGesture::TapGesture(const Vec2f& p, const unsigned long id) : _position(p), _widgetId(id) { }

ThirdStudy::TapGesture::~TapGesture() { }

const Vec2f& ThirdStudy::TapGesture::position() const {
	return _position;
}

const bool ThirdStudy::TapGesture::isOnWidget() {
	return _widgetId != 0;
}

const unsigned long ThirdStudy::TapGesture::widgetId() const {
	return _widgetId;
}