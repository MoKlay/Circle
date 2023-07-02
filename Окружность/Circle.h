#pragma once
class Position {
protected:
	float x, y;
public:
	Position()  { x = 0; y = 0; }
	~Position() {}
};

class Circle : public Position {
	float radius;
public:
	Circle()                               { radius = 0; Position(); }
	~Circle()                              {}
	void Set(float i, float j, float r) { x = i; y = j; radius = r; }
	float GetR()                          { return radius; }
	float GetX()                          { return x; }
	float GetY()                          { return y; }
};