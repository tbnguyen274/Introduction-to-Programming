#include <iostream>
using namespace std;

struct Fraction
{
	int numerator;
	int denominator;
};

void inputFraction(Fraction& f);
void displayFraction(Fraction f);

Fraction add(Fraction f1, Fraction f2);
Fraction subtract(Fraction f1, Fraction f2);
Fraction multiply(Fraction f1, Fraction f2);

void reduceFraction(Fraction& f);
int GCD(int a, int b);
Fraction reciprocal(Fraction f);