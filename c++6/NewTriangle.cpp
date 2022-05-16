#include "NewTriangle.h"

void NewTriangle::SetCenter(point center) {
	points[0].x -= this->center.x;
	points[0].y -= this->center.y;
	points[1].x -= this->center.x;
	points[1].y -= this->center.y;
	points[2].x -= this->center.x;
	points[2].y -= this->center.y;


	points[0].x += center.x;
	points[0].y += center.y;
	points[1].x += center.x;
	points[1].y += center.y;
	points[2].x += center.x;
	points[2].y += center.y;
}
void NewTriangle::Rotate(double angle) {
	angle *= Pi / 180.0;
	for (int i = 0; i < sizeof(points) / sizeof(points[0]); i++) {
		double xShifted = points[i].x - center.x;
		double yShifted = points[i].y - center.y;
		points[i].x = center.x + (xShifted * cos(angle) - yShifted * sin(angle));
		points[i].y = center.y + (xShifted * sin(angle) + yShifted * cos(angle));
	}
}