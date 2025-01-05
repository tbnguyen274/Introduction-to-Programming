#pragma once
#include <iostream>
#include <cstdlib>	// for rand() and srand()
#include <ctime>	// for time()

using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

void createRandomInt(int& n, int left, int right);

void createRandomMatrix(int a[][MAX_COLS], int rowsCount, int colsCount, int left, int right);

void outputMatrix(int a[][MAX_COLS], int rowsCount, int colsCount);

int calculateSumFirstRow(int a[][MAX_COLS], int rowsCount, int colsCount);
int calculateSumLastCol(int a[][MAX_COLS], int rowsCount, int colsCount);

int findMatrixMax(int a[][MAX_COLS], int rowsCount, int colsCount);
int findMatrixMin(int a[][MAX_COLS], int rowsCount, int colsCount);

bool isPrime(int n);
int countMatrixPrime(int a[][MAX_COLS], int rowsCount, int colsCount);

bool isPalindrome(int n);
bool checkPalindromeInMatrix(int a[][MAX_COLS], int rowsCount, int colsCount);
void informPalindromeinMatrix(int a[][MAX_COLS], int rowsCount, int colsCount);

int findMaxPrimeOfMatrix(int a[][MAX_COLS], int rowsCount, int colsCount);
void informMaxPrimeOfMatrix(int a[][MAX_COLS], int rowsCount, int colsCount);

bool isRowSortedDecrease(int a[][MAX_COLS], int rowsIndex, int colsCount);
bool checkRowsSortedDecrease(int a[][MAX_COLS], int rowsCount, int colsCount);
void informRowsSortedDecrease(int a[][MAX_COLS], int rowsCount, int colsCount);

void swap(int& a, int& b);
void swapFirstAndLastCols(int a[][MAX_COLS], int rowsCount, int colsCount);