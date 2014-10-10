#include "DisconnectionGesture.h"

#include "TouchPoint.h"

ThirdStudy::DisconnectionGesture::DisconnectionGesture() :
_widgetId(0), _toWid(0) { }

ThirdStudy::DisconnectionGesture::DisconnectionGesture(const unsigned long fromWid, const unsigned long toWid) :
_widgetId(fromWid), _toWid(toWid) {
	
}

ThirdStudy::DisconnectionGesture::~DisconnectionGesture() { }

const bool ThirdStudy::DisconnectionGesture::isOnWidget() {
	return _widgetId != 0;
}

const unsigned long ThirdStudy::DisconnectionGesture::widgetId() const {
	return _widgetId;
}

const unsigned long ThirdStudy::DisconnectionGesture::fromWid() const {
	return _widgetId;
}

const unsigned long ThirdStudy::DisconnectionGesture::toWid() const {
	return _toWid;
}