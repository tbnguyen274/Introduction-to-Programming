#include "MyFunctions.h"

int main() {
	int a[100];
	int a_copy[100];
	int n;
	int temp;

	// 1
	inputArray(a, n);
	cout << "Cac phan tu cua mang la: ";
	outputArray(a, n);

	copyArray(a, a_copy, n);	// copy mang a vao mang a_copy

	// 2
	int firstIndexNum, x1;
	findFirstIndexNum(a, n, x1, firstIndexNum);

	// 3
	int lastIndexNum, x2;
	findLastIndexNum(a, n, x2, lastIndexNum);

	// 4
	int firstIndexPrime, x3;
	findFirstIndexPrime(a, n, x3, firstIndexPrime);

	// 5
	int smallestValue, largestValue;
	findSmallestValue(a, n, smallestValue);
	findLargestValue(a, n, largestValue);

	// 6
	int smallestPositive;
	findSmallestPositive(a, n, smallestPositive);

	// 7
	int even_a[100];
	int odd_a[100];
	int countEven = 0, countOdd = 0;

	segregateEvenOdd(a, n, even_a, countEven, odd_a, countOdd);
	cout << "Cac phan tu cua mang chan la: ";
	outputArray(even_a, countEven);
	cout << "Cac phan tu cua mang le la: ";
	outputArray(odd_a, countOdd);

	// 8
	int prime_a[100];
	int countPrime = 0;

	findAndAppendPrime(a, n, prime_a, countPrime);
	cout << "Cac phan tu cua mang moi chua so nguyen to la: ";
	outputArray(prime_a, countPrime);

	// 9
	replacePrimeWith0(a, n);
	cout << "Cac phan tu cua mang sau khi thay so nguyen to bang 0 la: ";
	outputArray(a, n);

	// 10
	copyArray(a_copy, a, n);	// reset mang a thong qua mang a_copy do cac phan tu mang a bi thay doi
	temp = n;
	removePrime(a, temp);
	cout << "Cac phan tu cua mang sau khi loai bo so nguyen to la: ";
	outputArray(a, temp);

	// 11
	copyArray(a_copy, a, n);	// reset mang a thong qua mang a_copy do cac phan tu mang a bi thay doi
	temp = n;
	insertZeroBeforePrime(a, temp);
	cout << "Cac phan tu cua mang sau khi chen so 0 truoc so nguyen to la: ";
	outputArray(a, temp);

	// 12
	copyArray(a_copy, a, n);	// reset mang a thong qua mang a_copy do cac phan tu mang a bi thay doi
	sortAscending(a, n);
	cout << "Cac phan tu cua mang (sap xep tang dan) la: ";
	outputArray(a, n);

	sortDescending(a, n);
	cout << "Cac phan tu cua mang (sap xep giam dan) la: ";
	outputArray(a, n);

	// 13
	sortPositiveDescendingNegativeAscending(a, n);
	cout << "Cac phan tu cua mang (so duong giam dan va so am tang dan) la: ";
	outputArray(a, n);

	// 14
	cout << "Cac phan tu cua mang hien tai la: ";
	outputArray(a, n);

	return 0;
}