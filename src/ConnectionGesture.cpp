#include "ConnectionGesture.h"

#include "TouchPoint.h"

ThirdStudy::ConnectionGesture::ConnectionGesture() :
_widgetId(0), _toWid(0) { }

ThirdStudy::ConnectionGesture::ConnectionGesture(const unsigned long fromWid, const unsigned long toWid) :
_widgetId(fromWid), _toWid(toWid) {
	
}

ThirdStudy::ConnectionGesture::~ConnectionGesture() { }

const bool ThirdStudy::ConnectionGesture::isOnWidget() {
	return _widgetId != 0;
}

const unsigned long ThirdStudy::ConnectionGesture::widgetId() const {
	return _widgetId;
}

const unsigned long ThirdStudy::ConnectionGesture::fromWid() const {
	return _widgetId;
}

const unsigned long ThirdStudy::ConnectionGesture::toWid() const {
	return _toWid;
}