#include "Fraction.h"

void inputFraction(Fraction& f) {
	cout << "Nhap tu so: ";
	cin >> f.numerator;
	
	do {
		cout << "Nhap mau so: ";
		cin >> f.denominator;
	} while (f.denominator == 0);	
}

void displayFraction(Fraction f)
{
	cout << f.numerator << "/" << f.denominator;
}

Fraction add(Fraction f1, Fraction f2) {
	Fraction sum;

	sum.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
	sum.denominator = f1.denominator * f2.denominator;

	return sum;
}

Fraction subtract(Fraction f1, Fraction f2) {
	Fraction dif;

	dif.numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
	dif.denominator = f1.denominator * f2.denominator;

	return dif;
}

Fraction multiply(Fraction f1, Fraction f2) {
	Fraction pro;

	pro.numerator = f1.numerator * f2.numerator;
	pro.denominator = f1.denominator * f2.denominator;

	return pro;
}

int GCD(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}

	return a;
}

void reduceFraction(Fraction& f) {
	int gcd = GCD(f.numerator, f.denominator);

	f.numerator /= gcd;
	f.denominator /= gcd;
}

Fraction reciprocal(Fraction f) {
	Fraction reciprocal;

	if (f.numerator == 0) {
		reciprocal = { 0, 0 };
		return reciprocal;
	}

	reciprocal.numerator = f.denominator;
	reciprocal.denominator = f.numerator;

	return reciprocal;
}