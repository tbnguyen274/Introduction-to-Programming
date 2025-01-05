#include "pointsArray.h"

void inputPointsArray(Point2d a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap diem thu " << i << endl;
		inputPoint2D(a[i]);
		cout << endl;
	}
}

void inputPoint2D(Point2d& p) {
	cout << "Nhap x: ";
	cin >> p.x;
	cout << "Nhap y: ";
	cin >> p.y;
}

void outputPoint2D(Point2d p) {
	cout << "(" << p.x << "," << p.y << ")";
}

void outputPointsArray(Point2d a[], int n) {
	for (int i = 0; i < n; i++) {
		outputPoint2D(a[i]);
		cout << " ";
	}
}

int countPosPoints(Point2d a[], int n) {
	int count = 0;

	for (int i = 0; i < n; i++) {
		if (a[i].x > 0 && a[i].y > 0) {
			count++;
		}
	}

	return count;
}

Point2d pointWithLargestX(Point2d a[], int n)
{
	Point2d p = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i].x > p.x) {
			p = a[i];
		}
	}

	return p;
}
