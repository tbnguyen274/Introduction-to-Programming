#include <iostream>
using namespace std;

struct Point2d {
	int x;
	int y;
};

void inputPointsArray(Point2d a[], int n);
void inputPoint2D(Point2d& p);
void outputPoint2D(Point2d p);
void outputPointsArray(Point2d a[], int n);
int countPosPoints(Point2d a[], int n);
Point2d pointWithLargestX(Point2d a[], int n);