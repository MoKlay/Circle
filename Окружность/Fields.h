#pragma once
#include "Circle.h"

namespace Fields {
	using namespace System::Drawing;

	
	int t = 0, column = 1, line = 0;
	Point location, screen;
	bool flage = false, csv = true;
	double average = 0, x, y, r;
	Circle data[10];
}