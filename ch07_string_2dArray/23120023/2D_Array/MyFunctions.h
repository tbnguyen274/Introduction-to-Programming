// - Chủ đề 1 về "2D Array" làm 4 trang từ 29->32: có khoảng 14 ý nhỏ

#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

// Nhap ma tran truoc moi chuc nang
void inputMatrix(int a[][MAX_COLS], int& rowsCount, int& colsCount);
void outputMatrix(int a[][MAX_COLS], int rowsCount, int colsCount);
void inputSquareMatrix(int a[][MAX_COLS], int& size);
void outputSquareMatrix(int a[][MAX_COLS], int size);

// 1
int findColWithMaxSum(int a[][MAX_COLS], int rowsCount, int colsCount);
// 2
int findMaxOfCol(int a[][MAX_COLS], int rowsCount, int colsCount, int colIndex);
void printMaxOfCols(int a[][MAX_COLS], int rowsCount, int colsCount);

// 3
int sumExceptRowAndColumn(int a[][MAX_COLS], int rowsCount, int colsCount, int rowExclude, int colExclude);

// 4
int sumMiddleRow(int a[][MAX_COLS], int rowsCount, int colsCount);
int sumMiddleCol(int a[][MAX_COLS], int rowsCount, int colsCount);
int sumMiddleRowAndCol(int a[][MAX_COLS], int rowsCount, int colsCount);

// 5
int findMinOfRow(int a[][MAX_COLS], int rowsCount, int colsCount, int rowIndex);
void printMinOfRows(int a[][MAX_COLS], int rowsCount, int colsCount);
int findMinOfCol(int a[][MAX_COLS], int rowsCount, int colsCount, int colIndex);
void printMinOfCols(int a[][MAX_COLS], int rowsCount, int colsCount);

// 6
int sumCol(int a[][MAX_COLS], int rowsCount, int colIndex);
int sumRow(int a[][MAX_COLS], int rowIndex, int colsCount);
bool checkSumRowEqualCol(int a[][MAX_COLS], int rowsCount, int colsCount, int index);

// 7
void findTransposeMatrix(int a[][MAX_COLS], int rowsCount, int colsCount, int aTranspose[][MAX_COLS]);

// 8
int sumPrimaryDiagonal(int a[][MAX_COLS], int size);
int sumSecondaryDiagonal(int a[][MAX_COLS], int size);
int sumDiagonals(int a[][MAX_COLS], int size);
void findSumDiagonals(int a[][MAX_COLS], int size);

// 9
int sumAbovePrimaryDiagonal(int a[][MAX_COLS], int n);
int sumAboveSecondaryDiagonal(int a[][MAX_COLS], int n);

// 10
int sumBelowPrimaryDiagonal(int a[][MAX_COLS], int n);
int sumBelowSecondaryDiagonal(int a[][MAX_COLS], int n);
