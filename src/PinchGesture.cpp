#include "PinchGesture.h"

using namespace ci;

ThirdStudy::PinchGesture::PinchGesture() :
_position(Vec2f(0.0f, 0.0f)),
_distanceDelta(Vec2f(0.0f, 0.0f)),
_zoomDelta(0.0f),
_angleDelta(0.0f),
_widgetId(0) { }

ThirdStudy::PinchGesture::PinchGesture(const Vec2f& p, const Vec2f& dd, const float zd, const float ad, const unsigned long id) :
_position(p),
_distanceDelta(dd),
_zoomDelta(zd),
_angleDelta(ad),
_widgetId(id) { }

ThirdStudy::PinchGesture::~PinchGesture() { }

const Vec2f& ThirdStudy::PinchGesture::position() const {
	return _position;
}

const Vec2f& ThirdStudy::PinchGesture::distanceDelta() const {
	return _distanceDelta;
}

const float ThirdStudy::PinchGesture::zoomDelta() const {
	return _zoomDelta;
}

const float ThirdStudy::PinchGesture::angleDelta() const {
	return _angleDelta;
}

const bool ThirdStudy::PinchGesture::isOnWidget() {
	return _widgetId != 0;
}

const unsigned long ThirdStudy::PinchGesture::widgetId() const {
	return _widgetId;
}