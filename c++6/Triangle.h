
#include <iostream>
#include <cmath>
using namespace std;
struct point {
	double x;
	double y;
};
class Triangle
{
	
protected:
	point points[3];
	double angleA, angleB, angleC;
	double lenght(const point&, const point&);
	double Pi = 3.14159;
public:
	
	Triangle() {
		points[0].x = 0;
		points[1].x = 0;
		points[2].x = 0;
		points[0].y = 0;
		points[1].y = 0;
		points[2].y = 0;
		angleA = 0;
		angleB = 0;
		angleC = 0;
	}
	Triangle(point A, point B, double AngleA, double AngleB) {
		this->points[0] = A;
		this->points[1] = B;

		double tiltAngle = atan((points[1].y - points[0].y) / (points[1].x - points[0].x));
		this->angleA = AngleA * Pi / 180.0 + tiltAngle;
		this->angleB = AngleB * Pi / 180.0 + tiltAngle;

		points[2].x = (tan(angleA) * A.x - A.y - tan(angleB) * B.x + B.y) / (tan(angleA) - tan(angleB));
		points[2].y = tan(angleA) * (points[2].x - A.x) + A.y;
	}

	
	bool PointOnBorder(const point&);
	bool CrosseOrdinate();
	bool CrosseAbscissa();
	void WtiteInConsole();
	double GetLenght(int);

};