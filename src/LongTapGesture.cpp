#include "LongTapGesture.h"

using namespace ci;

ThirdStudy::LongTapGesture::LongTapGesture() : _position(Vec2f(0.0f, 0.0f)), _widgetId(0) { }
ThirdStudy::LongTapGesture::LongTapGesture(const Vec2f& p, const unsigned long id) : _position(p), _widgetId(id) { }

ThirdStudy::LongTapGesture::~LongTapGesture() { }

const Vec2f& ThirdStudy::LongTapGesture::position() const {
	return _position;
}

const bool ThirdStudy::LongTapGesture::isOnWidget() {
	return _widgetId != 0;
}

const unsigned long ThirdStudy::LongTapGesture::widgetId() const {
	return _widgetId;
}