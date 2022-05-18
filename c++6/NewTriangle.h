#pragma once
#include "Triangle.h"
class NewTriangle : public Triangle 
{
private:
	point center, reset;
public:
	NewTriangle() :Triangle() {
		center.x = 0;
		center.y = 0;
		reset.x = center.x;
		reset.y = center.y;
	}
	NewTriangle(point A, point B, double AngleA, double AngleB):Triangle( A, B, AngleA, AngleB) {
		center.x = (points[0].x + points[1].x + points[2].x) / 3;
		center.y = (points[0].y + points[1].y + points[2].y) / 3;
		reset.x = center.x;
		reset.y = center.y;

	}
	NewTriangle(Triangle& triangle) :Triangle(triangle) {
		center.x = (points[0].x + points[1].x + points[2].x) / 3;
		center.y = (points[0].y + points[1].y + points[2].y) / 3;
		reset.x = center.x;
		reset.y = center.y;
	}
	void Rotate(double);
	void SetCenter(point center);
	void ResetCenter();

};

