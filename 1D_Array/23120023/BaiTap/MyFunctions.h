#pragma once

#include <iostream>
#include <climits>
using namespace std;

void copyArray(int a[100], int b[100], int n);

// 1
int returnFirstIndexNum(int a[100], int n, int x);
void findFirstIndexNum(int a[100], int n, int& x, int& firstIndexNum);

// 2
int returnLastIndexNum(int a[100], int n, int x);
void findLastIndexNum(int a[100], int n, int& x, int& lastIndexNum);

// 3
bool isPrime(int n);
int returnFirstIndexPrime(int a[100], int n, int x);
void findFirstIndexPrime(int a[100], int n, int& x, int& firstIndexPrime);

// 4
int returnSmallestValue(int a[100], int n);
void findSmallestValue(int a[100], int n, int& smallestValue);

int returnLargestValue(int a[100], int x);
void findLargestValue(int a[100], int n, int& largestValue);

// 5
bool checkPositiveNum(int n);
int returnSmallestPositive(int a[100], int n);
void findSmallestPositive(int a[100], int n, int& smallestPositive);

// 6
void inputArray(int a[100], int& n);

// 7
void segregateEvenOdd(int a[100], int n, int even_a[100], int& countEven, int odd_a[100], int& countOdd);

// 8
void findAndAppendPrime(int a[100], int n, int prime_a[100], int& countPrime);

// 9
void replacePrimeWith0(int a[100], int n);

// 10
void removePrime(int a[100], int& n);

// 11
void insertZeroBeforePrime(int a[100], int& n);

// 12
void swap(int& a, int& b);
void sortAscending(int a[100], int n);
void sortDescending(int a[100], int n);

// 13
void positiveArray(int a[100], int n, int positive_a[100], int& count);
void negativeArray(int a[100], int n, int negative_a[100], int& count);
void sortPositiveDescendingNegativeAscending(int a[100], int n);

// 14
void outputArray(int a[100], int n);

