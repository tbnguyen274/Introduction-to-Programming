#include "MyFunctions.h"

void nhapSoDuong(int& n) {
	do {
		cout << "Nhap so nguyen duong n: ";
		cin >> n;
	} while (n < 1 || n > 100000000);
}

bool ktSoHoanHao(int n) {
	int S = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			S += i;
		}
	}
	return n * 2 == S;
}

int findMax(int n) {
	int max = n % 10;
	n /= 10;
	while (n > 0) {
		int r = n % 10;
		max = (max < r) ? r : max;
		n /= 10;
	}

	return max;
}
