#pragma once
class Position {
protected:
	double x, y;
public:
	Position() { x = 0; y = 0; }
	~Position() {};
};

class Circle : public Position {
	double radius;
public:
	Circle() { radius = 0; Position(); }
	~Circle() {}
	void Set(double i, double j, double r) { x = i; y = j; radius = r; }
	double GetR() { return radius; }
	double GetX() { return x; }
	double GetY() { return y; }
};