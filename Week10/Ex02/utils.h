#include <iostream>
#include <cmath>
using namespace std;

struct Point2D {
	float x;
	float y;
};

struct Line {
	Point2D start;
	Point2D end;
};

void inputPoint(Point2D& p);
void inputLine(Line& l);
void printLine(Line l);
float findDistance(Point2D p1, Point2D p2);
float lineLength(Line l);