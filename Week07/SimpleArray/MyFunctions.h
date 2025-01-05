#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include "math.h"
using namespace std;

// 1
int randomInt(int a, int b);

// 2
void randomArray(int a[], int size, int left, int right);

// 3
void sortIncrease(int a[], int n);

// 4
void outputArray(int a[], int n);

// 5
int findMax(int a[], int n);
int findMin(int a[], int n);
int findSum(int a[], int n);
double findAverage(int a[], int n);

// 6
int countEven(int a[], int n);
int countOdd(int a[], int n);

// 7
bool checkSquared(int a[], int n);

// 8
void listPrime(int a[], int n);

// 9
void findFirstDividendOf3(int a[], int n);

// 10
bool isPrime(int n);
void findLastPrime(int a[], int n);

// 11
bool isPalindrome(int n);
int countPalindrome(int a[], int n);

// 12
void findFirstDividendOf5(int a[], int n);

// 13
void findBoundary(int a[], int n);

// 14
void findNumEqualSumLocal(int a[], int n);

// 15
int findGCD(int a, int b);
int findArrayGCD(int a[], int n);

// 16
bool isAllOddDigitNum(int n);
void listAllOddDigitNum(int a[], int n);

// 17
bool isAllEvenDigitNum(int n);
int countAllEvenDigitNum(int a[], int n);

// 18
void findEvenNumHasEvenNeighbors(int a[], int n);

// 19
bool checkFirstDigitOdd(int n);
void listAllFirstDigitOddNum(int a[], int n);