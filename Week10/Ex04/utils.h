#include <iostream>
#include <cmath>
using namespace std;

struct Point2D {
	float x;
	float y;
};

struct Triangle {
	Point2D A;
	Point2D B;
	Point2D C;
};

void input(Point2D& p);
void inputTriangle(Triangle& delta);
bool isValidTriangle(Triangle delta);
float findDistance(Point2D p1, Point2D p2);
void findType(Triangle delta);
float findPerimeter(Triangle delta);
float findArea(Triangle delta);
