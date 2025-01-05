#include "utils.h"


void input(Point2D& p) {
	cout << "Nhap hoanh do x: ";
	cin >> p.x;
	cout << "Nhap tung do y: ";
	cin >> p.y;
}

void print(Point2D p) {
	cout << "(" << p.x << "," << p.y << ")" << endl;
}

float findDistance(Point2D p1, Point2D p2) {
	float d = 0;

	d = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));

	return d;
}