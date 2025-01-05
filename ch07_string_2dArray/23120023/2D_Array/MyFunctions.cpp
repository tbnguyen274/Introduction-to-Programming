#include "MyFunctions.h"

// Input
void inputMatrix(int a[][MAX_COLS], int& rowsCount, int& colsCount) {
	do {
		cout << "Nhap so dong ma tran: ";
		cin >> rowsCount;
	} while (rowsCount <= 0);

	do {
		cout << "Nhap so cot ma tran: ";
		cin >> colsCount;
	} while (colsCount <= 0);
	
	for (int row = 0; row < rowsCount; row++) {
		for (int col = 0; col < colsCount; col++) {
			cout << "Nhap a[" << row << "][" << col << "]: ";
			cin >> a[row][col];
		}
	}
}

// Output matrix
void outputMatrix(int a[][MAX_COLS], int rowsCount, int colsCount) {
	for (int row = 0; row < rowsCount; row++) {
		for (int col = 0; col < colsCount; col++) {
			cout << a[row][col] << " ";
		}
		cout << endl;
	}
}


// Find column with maximum sum in a Matrix
int findColWithMaxSum(int a[][MAX_COLS], int rowsCount, int colsCount) {
	int colMaxSum = 0;
	int colIndex = 0;

	// initialize column with max sum to be the first column
	for (int row = 0; row < rowsCount; row++) {
		int col = 0;
		colMaxSum += a[row][col];
		colIndex = col;
	}

	// check with other columns to find the one with largest sum
	for (int col = 1; col < colsCount; col++) {
		int sum = 0;

		for (int row = 0; row < rowsCount; row++) {
			sum += a[row][col];
		}

		if (sum > colMaxSum) {
			colMaxSum = sum;
			colIndex = col;
		}
	}

	return colIndex;
}


// Find maximum element of each column in a matrix
int findMaxOfCol(int a[][MAX_COLS], int rowsCount, int colsCount, int colIndex) {
	int max = a[0][colIndex];

	for (int row = 1; row < rowsCount; row++) {
		max = (a[row][colIndex] > max) ? a[row][colIndex] : max;
	}

	return max;
}

// Print maximum element of each column in a matrix
void printMaxOfCols(int a[][MAX_COLS], int rowsCount, int colsCount) {
	for (int col = 0; col < colsCount; col++) {
		int max = findMaxOfCol(a, rowsCount, colsCount, col);

		cout << "Phan tu lon nhat cua cot " << col << " la: " << max;
		cout << endl;
	}
}


// Find the sum of a column of given col index
int sumCol(int a[][MAX_COLS], int rowsCount, int colIndex) {
	int sum = 0;
	for (int row = 0; row < rowsCount; row++) {
		sum += a[row][colIndex];
	}

	return sum;
}

// Find the sum of a row of given row index
int sumRow(int a[][MAX_COLS], int rowIndex, int colsCount) {
	int sum = 0;
	for (int col = 0; col < colsCount; col++) {
		sum += a[rowIndex][col];
	}

	return sum;
}

/*
Find sum of all elements in a matrix except
the elements in row and/or column of given
value?
*/
int sumExceptRowAndColumn(int a[][MAX_COLS], int rowsCount, int colsCount, int rowExclude, int colExclude) {
	int sum = 0;

	for (int row = 0; row < rowsCount; row++) {
		for (int col = 0; col < colsCount; col++) {
			if (row != rowExclude && col != colExclude) {
				sum += a[row][col];
			}
		}
	}

	return sum;
}


// Sum of middle row and column in Matrix
int sumMiddleRow(int a[][MAX_COLS], int rowsCount, int colsCount) {
	int midRow = rowsCount / 2;
	int sumMidRow = sumRow(a, midRow, colsCount);

	return sumMidRow;
}

int sumMiddleCol(int a[][MAX_COLS], int rowsCount, int colsCount) {
	int midCol = colsCount / 2;
	int sumMidCol = sumCol(a, rowsCount, midCol);

	return sumMidCol;
}
int sumMiddleRowAndCol(int a[][MAX_COLS], int rowsCount, int colsCount) {
	
	int midRow = rowsCount / 2;
	int midCol = colsCount / 2;

	int sumMidRow = sumMiddleRow(a, rowsCount, colsCount);
	int sumMidCol = sumMiddleCol(a, rowsCount, colsCount);
	

	return sumMidCol + sumMidRow - a[midRow][midCol];	// the center element is added twice
}


// Minimum element of each row and each column in a matrix
int findMinOfRow(int a[][MAX_COLS], int rowsCount, int colsCount, int rowIndex) {
	int min = a[rowIndex][0];
	for (int col = 1; col < colsCount; col++) {
		min = (a[rowIndex][col] < min) ? a[rowIndex][col] : min;
	}

	return min;
}

void printMinOfRows(int a[][MAX_COLS], int rowsCount, int colsCount) {
	for (int row = 0; row < rowsCount; row++) {
		int min = findMinOfRow(a, rowsCount, colsCount, row);

		cout << "Phan tu nho nhat cua hang " << row << " la: " << min;
		cout << endl;
	}
}

int findMinOfCol(int a[][MAX_COLS], int rowsCount, int colsCount, int colIndex) {
	int min = a[0][colIndex];
	for (int row = 1; row < rowsCount; row++) {
		min = (a[row][colIndex] < min) ? a[row][colIndex] : min;
	}

	return min;
}

void printMinOfCols(int a[][MAX_COLS], int rowsCount, int colsCount) {
	for (int col = 0; col < colsCount; col++) {
		int min = findMinOfCol(a, rowsCount, colsCount, col);

		cout << "Phan tu nho nhat cua cot " << col << " la: " << min;
		cout << endl;
	}
}


/*
Check if sums of i-th row and i-th column are
same in matrix
*/
bool checkSumRowEqualCol(int a[][MAX_COLS], int rowsCount, int colsCount, int index) {
	if (sumRow(a, index, colsCount) == sumCol(a, rowsCount, index)) {
		return true;
	}

	return false;
	
}

// Program to find transpose of a matrix
void findTransposeMatrix(int a[][MAX_COLS], int rowsCount, int colsCount, int aTranspose[][MAX_COLS]) {
	for (int row = 0; row < rowsCount; row++) {
		for (int col = 0; col < colsCount; col++) {
			aTranspose[col][row] = a[row][col];
		}
	}

	outputMatrix(aTranspose, colsCount, rowsCount);
}


// Sum primary diagonal
int sumPrimaryDiagonal(int a[][MAX_COLS], int size) {
	int sum = 0;

	for (int i = 0; i < size; i++) {
		sum += a[i][i];
	}

	return sum;
}

// Sum secondary diagonal
int sumSecondaryDiagonal(int a[][MAX_COLS], int size) {
	int sum = 0;

	for (int i = 0; i < size; i++) {
		sum += a[i][size - 1 - i];
	}

	return sum;
}

// Sum of all elements on the diagonals
int sumDiagonals(int a[][MAX_COLS], int size) {
	int sum = 0;
	int sumPrimary = sumPrimaryDiagonal(a, size);
	int sumSecondary = sumSecondaryDiagonal(a, size);

	if (size % 2 == 0) {
		sum = sumPrimary + sumSecondary;
	}
	else {
		sum = sumPrimary + sumSecondary - a[size / 2][size / 2];
	}

	return sum;
}

void findSumDiagonals(int a[][MAX_COLS], int size) {
	int sumPrimary = sumPrimaryDiagonal(a, size);
	int sumSecondary = sumSecondaryDiagonal(a, size);
	int sumBoth = sumDiagonals(a, size);

	cout << "Tong cac phan tu thuoc duong cheo chinh cua ma tran la: " << sumPrimary << endl;
	cout << "Tong cac phan tu thuoc duong cheo phu cua ma tran la: " << sumSecondary << endl;
	cout << "Tong cac phan tu thuoc hai duong cheo cua ma tran la: " << sumBoth << endl;
}

// All of elements above primary and secondary diagonals
int sumAbovePrimaryDiagonal(int a[][MAX_COLS], int n) {
	int sum = 0;

	for (int row = 0; row < n; row++) {
		for (int col = row + 1; col < n; col++) {
			sum += a[row][col];
		}
	}

	return sum;
}

int sumAboveSecondaryDiagonal(int a[][MAX_COLS], int n) {
	int sum = 0;

	for (int row = 0; row < n; row++) {
		for (int col = 0; col < n - 1 - row; col++) {
			sum += a[row][col];
		}
	}

	return sum;
}

// All of elements under primary and secondary diagonals
int sumBelowPrimaryDiagonal(int a[][MAX_COLS], int n) {
	int sum = 0;

	for (int col = 0; col < n; col++) {
		for (int row = col + 1; row < n; row++) {
			sum += a[row][col];
		}
	}

	return sum;
}

int sumBelowSecondaryDiagonal(int a[][MAX_COLS], int n) {
	int sum = 0;

	for (int col = 0; col < n; col++) {
		for (int row = n - 1; row > n - 1 - col; row--) {
			sum += a[row][col];
		}
	}

	return sum;
}

// Input Square Matrix
void inputSquareMatrix(int a[][MAX_COLS], int& size) {
	do {
		cout << "Nhap kich thuoc ma tran: ";
		cin >> size;
	} while (size <= 0);

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << "Nhap a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

// Output Square Matrix
void outputSquareMatrix(int a[][MAX_COLS], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}