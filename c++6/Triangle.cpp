#include "Triangle.h"

#pragma region private method
double Triangle::lenght(const point& first, const point& second) {
	return	sqrt(pow((first.x - second.x), 2) + (pow((first.y - second.y), 2)));
}
#pragma endregion



bool Triangle::PointOnBorder(const point& t) {
	if ((lenght(points[0], t) + lenght(t, points[1]) == lenght(points[0], points[1])) ||
		(lenght(points[0], t) + lenght(t, points[2]) == lenght(points[0], points[2])) ||
		(lenght(points[1], t) + lenght(t, points[2]) == lenght(points[1], points[2])))
	{
		return true;
	}
	return false;

}
bool Triangle::CrosseOrdinate() {
	if ((points[0].y + points[1].y + points[2].y) < (abs(points[0].y) + abs(points[1].y) + abs(points[2].y)))
		return true;
	return false;
}
bool Triangle::CrosseAbscissa() {
	if ((points[0].x + points[1].x + points[2].x) < (abs(points[0].x) + abs(points[1].x) + abs(points[2].x)))
		return true;
	return false;
}
void Triangle::WtiteInConsole() {
	cout << "A.x:" << points[0].x << " .y " << points[0].y << "\n";
	cout << "B.x:" << points[1].x << " .y " << points[1].y << "\n";
	cout << "C.x:" << points[2].x << " .y " << points[2].y << "\n";
	cout << "angelA " << angleA<< " angleB " << angleB << "\n";
	cout << atan(((points[1].x - points[0].x) / (points[1].y - points[0].y)));



}
double Triangle::GetLenght(int Number) {
	switch (Number)
	{
	case 1:
		return lenght(points[0], points[1]);
		break;
	case 2:
		return lenght(points[0], points[2]);
		break;
	case 3:
		return lenght(points[2], points[1]);
		break;
	default:
		return -1;
		break;
	}
}


