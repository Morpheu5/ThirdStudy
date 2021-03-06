#pragma once

#include "TuioCursor.h"

using namespace ci;
using namespace ci::tuio;

namespace ThirdStudy {

	class TouchPoint : public Cursor {
	public:
		double timestamp;
	
		TouchPoint();
		TouchPoint(const Cursor& c);
		
		void setPos(Vec2f p) { mPos = p; }
	};
}