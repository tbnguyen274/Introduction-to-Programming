#include "Fraction.h"
#include "pointsArray.h"

int main() {
	/*Fraction f1, f2;
	cout << "Nhap phan so 1\n";
	inputFraction(f1);
	cout << endl;

	cout << "Nhap phan so 2\n";
	inputFraction(f2);
	cout << endl;

	cout << "Phan so 1: ";
	displayFraction(f1);
	cout << endl;

	cout << "Phan so 2: ";
	displayFraction(f2);
	cout << endl;

	Fraction sum = add(f1, f2);
	reduceFraction(sum);
	cout << "Tong la: ";
	displayFraction(sum);
	cout << endl;

	Fraction reci = reciprocal(sum);
	cout << "Nghich dao: ";
	displayFraction(reci);*/

	Point2d a[100];
	int n = 0;

	cout << "Nhap so diem: ";
	cin >> n;

	inputPointsArray(a, n);

	cout << "Cac diem da nhap la: ";
	outputPointsArray(a, n);
	cout << endl;

	int count = countPosPoints(a, n);
	cout << "So diem co toa do duong la: " << count << endl;

	Point2d largest = pointWithLargestX(a, n);
	cout << "Diem co gia tri x lon nhat la: ";
	outputPoint2D(largest);

	return 0;
}