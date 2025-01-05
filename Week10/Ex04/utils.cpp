#include "utils.h"

void input(Point2D& p) {
	cout << "Nhap hoanh do x: ";
	cin >> p.x;
	cout << "Nhap tung do y: ";
	cin >> p.y;
}

void inputTriangle(Triangle& delta) {
	cout << "Nhap diem A\n";
	input(delta.A);
	cout << endl;

	cout << "Nhap diem B\n";
	input(delta.B);
	cout << endl;

	cout << "Nhap diem C\n";
	input(delta.C);
	cout << endl;
}

float findDistance(Point2D p1, Point2D p2) {
	float d = 0;

	d = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));

	return d;
}

bool isValidTriangle(Triangle delta) {
	float c = findDistance(delta.A, delta.B);
	float b = findDistance(delta.A, delta.C);
	float a = findDistance(delta.B, delta.C);

	return (a > 0) && (b > 0) && (c > 0) 
		&& (a + b > c) && (a + c > b) && (b + c > a);
}

void findType(Triangle delta) {
	float c = findDistance(delta.A, delta.B);
	float b = findDistance(delta.A, delta.C);
	float a = findDistance(delta.B, delta.C);

	if ((a == b) && (b == c)) {
		cout << "Tam giac vua nhap la tam giac deu\n";
	}
	else if ((a == b) || (b == c) || (c == a)) {
		if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) {
			cout << "Tam giac vua nhap la tam giac vuong can\n";
		}
		else {
			cout << "Tam giac vua nhap la tam giac can\n";
		}
	}
	else if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) {
		cout << "Tam giac vua nhap la tam giac vuong\n";
	}
	else {
		cout << "Tam giac vua nhap la tam giac thuong\n";
	}
}

float findPerimeter(Triangle delta) {
	float c = findDistance(delta.A, delta.B);
	float b = findDistance(delta.A, delta.C);
	float a = findDistance(delta.B, delta.C);

	return a + b + c;
}

float findArea(Triangle delta) {
	float c = findDistance(delta.A, delta.B);
	float b = findDistance(delta.A, delta.C);
	float a = findDistance(delta.B, delta.C);

	float S = (a + b + c) / 2;

	return sqrt(S * (S - a) * (S - b) * (S - c));
}