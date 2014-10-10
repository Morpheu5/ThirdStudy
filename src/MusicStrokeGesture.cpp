#include "MusicStrokeGesture.h"

#include "TouchPoint.h"

ThirdStudy::MusicStrokeGesture::MusicStrokeGesture() :
_widgetId(0) { }

ThirdStudy::MusicStrokeGesture::MusicStrokeGesture(const TouchTrace& t, const unsigned long id) :
_stroke(t),
_widgetId(id) { }

ThirdStudy::MusicStrokeGesture::~MusicStrokeGesture() { }

const ThirdStudy::TouchTrace& ThirdStudy::MusicStrokeGesture::stroke() const {
	return _stroke;
}

const bool ThirdStudy::MusicStrokeGesture::isOnWidget() {
	return _widgetId != 0;
}

const unsigned long ThirdStudy::MusicStrokeGesture::widgetId() const {
	return _widgetId;
}