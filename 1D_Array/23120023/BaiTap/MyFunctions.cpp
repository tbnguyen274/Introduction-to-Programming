#include "MyFunctions.h"

// Nhan ban ham hien tai
void copyArray(int a[100], int b[100], int n) {
	for (int i = 0; i < n; i++) {
		b[i] = a[i];
	}
}

// Ham kiem tra so nguyen to
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

// Ham tra ve chi so mang cua lan dau tien xuat hien cua 1 so x
int returnFirstIndexNum(int a[100], int n, int x) {
	// Duyet mang theo chieu xuoi
	for (int i = 0; i < n; i++) {
		if (a[i] == x) {
			return i;	//Tra ve chi so i ngay khi tim duoc so dau tien trong mang bang x
		}
	}

	return -1;	//Khong ton tai so x trong day a[]

}

// Ham tra ve chi so mang cua lan dau tien xuat hien cua 1 so x
void findFirstIndexNum(int a[100], int n, int& x, int& firstIndexNum) {
	cout << "Nhap so nguyen can tim chi so dau tien: ";
	cin >> x;
	firstIndexNum = returnFirstIndexNum(a, n, x);

	if (firstIndexNum == -1) {
		cout << "So nguyen vua nhap khong ton tai trong mang\n";
	}
	else {
		cout << "Chi so dau tien cua so nguyen vua nhap la: " << firstIndexNum << endl;
	}
}

// Ham tra ve chi so mang cua lan cuoi cung xuat hien cua 1 so x
int returnLastIndexNum(int a[100], int n, int x) {

	// Duyet mang theo chieu nguoc
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] == x) {
			return i;	//Tra ve chi so i ngay khi tim duoc so dau tien trong mang bang x
		}
	}

	return -1;	//Khong ton tai so x trong day a[]
}

// Ham tra ve chi so mang cua lan dau tien xuat hien cua 1 so x
void findLastIndexNum(int a[100], int n, int& x, int& lastIndexNum) {
	cout << "Nhap so nguyen can tim chi so cuoi cung: ";
	cin >> x;
	lastIndexNum = returnLastIndexNum(a, n, x);

	if (lastIndexNum == -1) {
		cout << "So nguyen vua nhap khong ton tai trong mang\n";
	}
	else {
		cout << "Chi so cuoi cung cua so nguyen vua nhap la: " << lastIndexNum << endl;
	}
}

// Ham tra ve chi so mang cua lan dau tien xuat hien cua 1 so nguyen to
int returnFirstIndexPrime(int a[100], int n, int x) {

	// Kiem tra x co la so nguyen to khong
	if (!isPrime(x)) {
		return -1;
	}

	// Duyet mang theo chieu xuoi, tim chi so i cua so dau tien trong mang bang x
	for (int i = 0; i < n; i++) {
		if (a[i] == x) {
			return i;
		}
	}

	return -1;
}

// Ham tra ve chi so mang cua lan dau tien xuat hien cua 1 so x
void findFirstIndexPrime(int a[100], int n, int& x, int& firstIndexPrime) {
	cout << "Nhap so nguyen to can tim chi so dau tien: ";
	cin >> x;
	firstIndexPrime = returnFirstIndexPrime(a, n, x);

	if (firstIndexPrime == -1) {
		cout << "So nguyen vua nhap khong la so nguyen to hoac khong ton tai trong mang\n";
	}
	else {
		cout << "Chi so dau tien cua so nguyen to vua nhap la: " << firstIndexPrime << endl;
	}
}

// Ham tra ve so nho nhat trong day
int returnSmallestValue(int a[100], int n) {
	int min = a[0];

	for (int i = 1; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}

	return min;
}

// Ham tra ve chi so mang cua lan dau tien xuat hien cua 1 so x
void findSmallestValue(int a[100], int n, int& smallestValue) {
	smallestValue = returnSmallestValue(a, n);
	cout << "Gia tri nho nhat cua mang la: " << smallestValue << endl;
}

// Ham tra ve so lon nhat trong day
int returnLargestValue(int a[100], int n) {
	int max = a[0];

	for (int i = 1; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}

	return max;
}

// Ham tra ve chi so mang cua lan dau tien xuat hien cua 1 so x
void findLargestValue(int a[100], int n, int& largestValue) {
	largestValue = returnLargestValue(a, n);
	cout << "Gia tri lon nhat cua mang la: " << largestValue << endl;
}

// Ham kiem tra so duong
bool checkPositiveNum(int n) {
	return (n > 0) ? true : false;
}

// Ham tra ve so duong nho nhat trong day
int returnSmallestPositive(int a[100], int n) {
	int min = INT_MAX;

	for (int i = 0; i < n; i++) {
		if (checkPositiveNum(a[i])) {
			if (a[i] < min) {
				min = a[i];
			}
		}
	}

	// Neu gia tri min > 0 thi return min
	if (checkPositiveNum(min)) {
		return min;
	}

	return -1;	//Day khong co so duong
}

// Ham tra ve chi so mang cua lan dau tien xuat hien cua 1 so x
void findSmallestPositive(int a[100], int n, int& smallestPositive) {
	smallestPositive = returnSmallestPositive(a, n);
	if (smallestPositive == -1) {
		cout << "Mang khong ton tai so nguyen duong\n";
	}
	else {
		cout << "Gia tri nguyen duong nho nhat cua mang la: " << smallestPositive << endl;
	}
}

void inputArray(int a[100], int& n) {
	do {
		cout << "Nhap n: ";
		cin >> n;
	} while (n <= 0);


	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

// Ham phan tach so chan va so le cua 1 mang vao 2 mang khac nhau
void segregateEvenOdd(int a[100], int n, int even_a[100], int& countEven, int odd_a[100], int& countOdd) {
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			even_a[countEven] = a[i];
			countEven++;
		}
		else {
			odd_a[countOdd] = a[i];
			countOdd++;
		}
	}
}

// Ham tim so nguyen to trong 1 mang va them so do vao mang moi
void findAndAppendPrime(int a[100], int n, int prime_a[100], int& countPrime) {
	for (int i = 0; i < n; i++) {
		if (isPrime(a[i])) {
			prime_a[countPrime++] = a[i];
		}
	}
}

// Ham thay the cac so nguyen to trong mang bang so 0
void replacePrimeWith0(int a[100], int n) {
	for (int i = 0; i < n; i++) {
		if (isPrime(a[i])) {
			a[i] = 0;
		}
	}
}

// Ham xoa so nguyen to khoi mang
void removePrime(int a[100], int& n) {
	for (int i = 0; i < n; i++) {
		if (isPrime(a[i])) {
			for (int j = i; j < n - 1; j++) {
				a[j] = a[j + 1];
			}
			n--;
			i--;
		}
	}
}

// Ham chen them so 0 truoc so nguyen to trong mang
void insertZeroBeforePrime(int a[100], int& n) {
	for (int i = 0; i < n; i++) {
		if (isPrime(a[i])) {
			n++;

			for (int j = n - 1; j > i; j--) {
				a[j] = a[j - 1];
			}

			a[i] = 0;
			i++;
		}
	}
}

// Ham hoan vi 2 so
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

// Ham sap xep mang tang dan
void sortAscending(int a[100], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
}

// Ham sap xep mang giam dan
void sortDescending(int a[100], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] < a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
}

// Ham chua cac so duong trong mang
void positiveArray(int a[100], int n, int positive_a[100], int& count) {
	for (int i = 0; i < n; i++) {
		// so 0 khong la so duong hay so am, nen o day ta coi no nhu so duong de de thao tac
		if (a[i] >= 0) {
			positive_a[count++] = a[i];
		}
	}
}

// Ham chua cac so am trong mang
void negativeArray(int a[100], int n, int negative_a[100], int& count) {

	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			negative_a[count++] = a[i];
		}
	}
}

// Ham sap xep cac so duong giam dan, phia sau la cac so am tang dan
void sortPositiveDescendingNegativeAscending(int a[100], int n) {
	int positive_a[100], negative_a[100];
	int countPositive = 0, countNegative = 0;

	positiveArray(a, n, positive_a, countPositive);
	negativeArray(a, n, negative_a, countNegative);

	sortDescending(positive_a, countPositive);
	sortAscending(negative_a, countNegative);


	for (int i = 0; i < n; i++) {
		if (i < countPositive) {
			a[i] = positive_a[i];
		}
		else {
			a[i] = negative_a[i - countPositive];
		}
	}
}

// Ham xuat mang
void outputArray(int a[100], int n) {
	for (int i = 0; i < n; ++i) {
		cout << a[i] << " ";
	}

	cout << endl;
}