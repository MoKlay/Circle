#pragma once
#include "Circle.h"

namespace Fields { //������������ ���� ��� ������ ���������� ��� ���� ����
	using namespace System::Drawing;

	Point location, screen; //���������� �� �����, �� ������
	bool flage = false, csv = true; //������: ����������� ������, ����������������� �����
	Circle data[10]; // ������ �� �������� �����������
}