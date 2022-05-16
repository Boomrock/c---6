#pragma once
#include "Triangle.h"
class NewTriangle : public Triangle 
{
private:
	point center;
public:
	NewTriangle() :Triangle() {
		center.x = 0;
		center.y = 0;
	}
	NewTriangle(point A, point B, double AngleA, double AngleB):Triangle( A, B, AngleA, AngleB) {
		center.x = (points[0].x + points[1].x + points[2].x) / 3;
		center.y = (points[0].y + points[1].y + points[2].y) / 3;
	}
	NewTriangle(Triangle& triangle) :Triangle(triangle) {
		center.x = (points[0].x + points[1].x + points[2].x) / 3;
		center.y = (points[0].y + points[1].y + points[2].y) / 3;
	}
	void Rotate(double);
	void SetCenter(point center);
	
};

