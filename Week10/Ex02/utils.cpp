#include "utils.h"

void inputPoint(Point2D& p) {
	cout << "Nhap hoanh do x: ";
	cin >> p.x;
	cout << "Nhap tung do y: ";
	cin >> p.y;
}

void inputLine(Line& l) {
	cout << "Nhap diem dau cua doan thang\n";
	inputPoint(l.start);
	cout << "Nhap diem cuoi cua doan thang\n";
	inputPoint(l.end);
}

void printLine(Line l) {
	cout << "Doan thang co diem bat dau tai (" << l.start.x << "," << l.start.y 
		<< ") va co diem ket thuc tai (" << l.end.x << "," << l.end.y << ")";
}

float findDistance(Point2D p1, Point2D p2) {
	float d = 0;

	d = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));

	return d;
}

float lineLength(Line l) {
	float d = 0;

	d = findDistance(l.start, l.end);

	return d;
}