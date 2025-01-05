#include "utils.h"

int main() {
	cout << "Project Point\n\n";

	Point2D p1, p2;
	
	cout << "Nhap diem 1" << endl;
	input(p1);

	cout << "Nhap diem 2" << endl;
	input(p2);

	cout << "Diem 1: ";
	print(p1);
	cout << "Diem 2: ";
	print(p2);

	float d = findDistance(p1, p2);
	cout << "Khoang cach hai diem la: " << d;
	return 0;
}