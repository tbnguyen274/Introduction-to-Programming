#include "utils.h"

void createRandomInt(int& n, int left, int right) {
	n = rand() % (right - left + 1) + left;
}

void createRandomMatrix(int a[][MAX_COLS], int rowsCount, int colsCount, int left, int right) {
	for (int row = 0; row < rowsCount; row++) {
		for (int col = 0; col < colsCount; col++) {
			createRandomInt(a[row][col], left, right);
		}
	}
}

void outputMatrix(int a[][MAX_COLS], int rowsCount, int colsCount) {
	for (int row = 0; row < rowsCount; row++) {
		for (int col = 0; col < colsCount; col++) {
			cout << a[row][col] << " ";
		}
		cout << endl;
	}
}

int calculateSumFirstRow(int a[][MAX_COLS], int rowsCount, int colsCount) {
	int row = 0;
	int sum = 0;

	for (int col = 0; col < colsCount; col++) {
		sum += a[row][col];
	}

	return sum;
}

int calculateSumLastCol(int a[][MAX_COLS], int rowsCount, int colsCount) {
	int col = colsCount - 1;
	int sum = 0;

	for (int row = 0; row < rowsCount; row++) {
		sum += a[row][col];
	}

	return sum;
}

int findMatrixMax(int a[][MAX_COLS], int rowsCount, int colsCount) {
	int max = 0;
	for (int row = 0; row < rowsCount; row++) {
		for (int col = 0; col < colsCount; col++) {
			max = (a[row][col] > max) ? a[row][col] : max;
		}
	}

	return max;
}

int findMatrixMin(int a[][MAX_COLS], int rowsCount, int colsCount) {
	int min = 100;
	for (int row = 0; row < rowsCount; row++) {
		for (int col = 0; col < colsCount; col++) {
			min = (a[row][col] < min) ? a[row][col] : min;
		}
	}

	return min;
}

bool isPrime(int n) {
	if (n < 2) {
		return false;
	}

	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}

	return true;
}

int countMatrixPrime(int a[][MAX_COLS], int rowsCount, int colsCount) {
	int count = 0;
	for (int row = 0; row < rowsCount; row++) {
		for (int col = 0; col < colsCount; col++) {
			if (isPrime(a[row][col])) {
				count++;
			}
		}
	}

	return count;
}

bool isPalindrome(int n) {
	int temp = n;
	int reversedNum = 0;

	while (temp != 0) {
		reversedNum = reversedNum * 10 + temp % 10;
		temp /= 10;
	}

	return n == reversedNum;
}

bool checkPalindromeInMatrix(int a[][MAX_COLS], int rowsCount, int colsCount) {
	for (int row = 0; row < rowsCount; row++) {
		for (int col = 0; col < colsCount; col++) {
			if (isPalindrome(a[row][col])) {
				return true;
			}
		}
	}

	return false;
}

void informPalindromeinMatrix(int a[][MAX_COLS], int rowsCount, int colsCount) {
	bool check = checkPalindromeInMatrix(a, rowsCount, colsCount);
	if (check) {
		cout << "Ma tran co ton tai so doi xung" << endl;
	}
	else {
		cout << "Ma tran khong ton tai so doi xung" << endl;
	}
}

int findMaxPrimeOfMatrix(int a[][MAX_COLS], int rowsCount, int colsCount) {
	int max = 0;
	int count = countMatrixPrime(a, rowsCount, colsCount);

	if (0 == count) {
		return -1;
	}
	
	for (int row = 0; row < rowsCount; row++) {
		for (int col = 0; col < colsCount; col++) {
			if (isPrime(a[row][col]) && a[row][col] > max) {
				max = a[row][col];
			}
		}
	}

	return max;
}

void informMaxPrimeOfMatrix(int a[][MAX_COLS], int rowsCount, int colsCount) {
	int max = findMaxPrimeOfMatrix(a, rowsCount, colsCount);
	if (-1 == max) {
		cout << "Ma tran khong ton tai so nguyen to" << endl;
	}
	else {
		cout << "So nguyen to lon nhat trong ma tran la: " << max << endl;
	}
}

bool isRowSortedDecrease(int a[][MAX_COLS], int rowsIndex, int colsCount) {
	int row = rowsIndex;
	for (int col = 0; col < colsCount - 1; col++) {
		if (a[row][col] >= a[row][col + 1]) {
			return false;
		}
	}

	return true;
}

bool checkRowsSortedDecrease(int a[][MAX_COLS], int rowsCount, int colsCount) {
	for (int row = 0; row < rowsCount; row++) {
		if (isRowSortedDecrease(a, row, colsCount)) {
			return true;
		}
	}

	return false;
}

void informRowsSortedDecrease(int a[][MAX_COLS], int rowsCount, int colsCount) {
	if (checkRowsSortedDecrease(a, rowsCount, colsCount)) {
		cout << "Ma tran co ton tai it nhat mot dong gom cac gia tri giam dan tu trai qua phai" << endl;
	}
	else {
		cout << "Ma tran khong ton tai dong gom cac gia tri giam dan tu trai qua phai" << endl;
	}
}

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void swapFirstAndLastCols(int a[][MAX_COLS], int rowsCount, int colsCount) {
	for (int row = 0; row < rowsCount; row++) {
		swap(a[row][0], a[row][colsCount - 1]);
	}
}