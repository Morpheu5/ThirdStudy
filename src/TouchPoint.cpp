#include "TouchPoint.h"

using namespace ci;

ThirdStudy::TouchPoint::TouchPoint() {
	timestamp = app::getElapsedSeconds();
}

ThirdStudy::TouchPoint::TouchPoint(const tuio::Cursor& c) : tuio::Cursor(c) {
	timestamp = app::getElapsedSeconds();
}