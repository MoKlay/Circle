#pragma once
#include "Circle.h"

namespace Fields { //пространство имен для общего назначения для всех форм
	using namespace System::Drawing;

	Point location, screen; //координаты по форме, по экрану
	bool flage = false, csv = true; //флажки: удерживания кнопки, продолжительность цикла
	Circle data[10]; // массив из объектов окружностей
}