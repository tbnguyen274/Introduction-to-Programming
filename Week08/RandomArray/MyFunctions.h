#pragma once
#include <iostream>
#include <cstdlib>	// for rand() and srand()
#include <ctime>	// for time()

using namespace std;

// 1
void createRandomInt(int& n, int left, int right);

// 2
void createRandomArr(int a[], int n, int left, int right);
void outputArray(int a[], int n);

// 3
void removeRepetition(int a[], int& n);

// 4
void moveMaxToFirst(int a[], int n);

// 5
void reverseEvenOrder(int a[], int n);

// 6
bool isPrime(int n);
int findNearestPrime(int n);
void replaceWithNearestPrime(int a[], int n);
