#include "Widget.h"

unsigned long ThirdStudy::Widget::s_id = 0;

ThirdStudy::Widget::Widget() {
	// So that there can never be a widget with id 0
	_id = ++s_id;
}