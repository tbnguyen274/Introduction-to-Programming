#include "MyFunctions.h"

/*Sinh số nguyên trong khoảng [left, right] */
int randomInt(int a, int b) {
	int left = a;
	int right = b;
	int value = rand() % (right - left + 1) + left;

	return value;
}

// Tạo mảng ngẫu nhiên
void randomArray(int a[], int size, int left, int right) {
	int count = size; // Kích thước hiện tại của mảng

	for (int i = 0; i < count; i++) {
		a[i] = randomInt(left, right);
	}
}

// Sắp xếp mảng tăng dần
void sortIncrease(int a[], int n) {
	int temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				// Hoan vi 2 so a[i] va a[j]
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

// Xuất mảng
void outputArray(int a[], int n) {
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}

// Tìm giá trị lớn nhất mảng
int findMax (int a[], int n) {
	int max = a[0];
	for (int i = 1; i < n; i++) {
		max = (a[i] > max) ? a[i] : max;
	}

	return max;
}

// Tìm giá trị nhỏ nhất mảng
int findMin(int a[], int n) {
	int min = a[0];
	for (int i = 1; i < n; i++) {
		min = (a[i] < min) ? a[i] : min;
	}

	return min;
}

// Tìm tổng các phần tử mảng
int findSum(int a[], int n) {
	int sum = 0;
	for (int i = 1; i < n; i++) {
		sum += a[i];
	}

	return sum;
}

// Tìm giá trị trung bình của mảng
double findAverage(int a[], int n) {
	cout << fixed << setprecision(2);
	double average = findSum(a, n) * 1.0 / n;

	return average;
}

// Đếm số chẵn trong mảng
int countEven(int a[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			count++;
		}
	}
	return count;
}

// Đếm số lẻ trong mảng
int countOdd(int a[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 1) {
			count++;
		}
	}
	return count;
}

// Hàm kiểm tra tồn tại số chính phương trong mảng
bool checkSquared(int a[], int n) {
	for (int i = 0; i < n; i++) {
		int x = (int) sqrt(a[i]);
		if (x * x == a[i]) {
			return true;
		}
	}
	return false;
}

// Hàm kiểm tra số nguyên tố
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

// Hàm liệt kê số nguyên tố
void listPrime(int a[], int n) {
	int countPrime = 0;
	cout << "(Cac) so nguyen to trong mang la: ";
	for (int i = 0; i < n; i++) {
		if (isPrime(a[i])) {
			cout << a[i] << " ";
			countPrime++;
		}
	}
	if (countPrime == 0) {
		cout << "khong co";
	}
}

// Hàm tìm số đầu tiên chia hết cho 3
void findFirstDividendOf3(int a[], int n) {
	int x = 0;;
	for (int i = 0; i < n; i++) {
		if (a[i] % 3 == 0) {
			x = a[i];
			break;
		}
	}
	if (x == 0) {
		cout << "Mang khong co so nao chia het cho 3" << endl;
	}
	else {
		cout << "So chia het cho 3 dau tien trong mang la: " << x << endl;
	}
}

// Hàm tìm số nguyên tố cuối cùng của mảng
void findLastPrime(int a[], int n) {
	int max = 0;
	for (int i = 1; i < n; i++) {
		if (isPrime(a[i]) && max < a[i]) {
			max = a[i];
		}
	}
	if (max == 0) {
		cout << "Mang khong chua so nguyen to";
	}
	else {
		cout << "So nguyen to cuoi cung cua mang la: " << max;
	}
}

// Hàm kiểm tra số đối xứng
bool isPalindrome(int n) {
	int temp = n;
	int r_num = 0;
	while (n > 0) {
		r_num = r_num * 10 + (n % 10);
		n /= 10;
	}
	return temp == r_num;
}

// Hàm đếm số đối xứng trong mảng
int countPalindrome(int a[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (isPalindrome(a[i])) {
			count++;
		}
	}
	return count;
}

// Hàm tìm số đầu tiên chia hết cho 5
void findFirstDividendOf5(int a[], int n) {
	int x = 0;;
	for (int i = 0; i < n; i++) {
		if (a[i] % 5 == 0) {
			x = a[i];
			break;
		}
	}
	if (x == 0) {
		cout << "Mang khong co so nao chia het cho 5" << endl;
	}
	else {
		cout << "So chia het cho 5 dau tien trong mang la: " << x << endl;
	}
}

// Hàm tìm x sao cho [-x, x] chứa tất cả các giá trị trong mảng
void findBoundary(int a[], int n) {
	int x = findMax(a, n);
	cout << "Gia tri x sao cho [-x, x] chua tat ca cac gia tri trong mang la: " << x << endl;
}

// Hàm tìm số trong mảng có giá trị bằng tổng 2 số lân cận trên trái của nó.
void findNumEqualSumLocal(int a[], int n) {
	int count = 0;
	cout << "(Cac) so trong mang co gia tri bang tong 2 so lan can trai la: ";
	for (int i = 2; i < n; i++) {
		if (a[i] == (a[i - 1] + a[i - 2])) {
			cout << a[i] << " ";
			count++;
		}
	}
	if (count == 0) {
		cout << "khong co";
	}
	cout << endl;
}

// Hàm tìm ước chung lớn nhất
int findGCD(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

// Hàm tìm ước chung lớn nhất của mảng
int findArrayGCD(int a[], int n) {
	int res = a[0];
	for (int i = 1; i < n; i++) {
		res = findGCD(res, a[i]);
	}
	return res;
}

// Hàm kiểm tra số chỉ toàn chữ số lẻ
bool isAllOddDigitNum(int n) {
	while (n != 0) {
		int r = n % 10;
		if (r % 2 == 0) {
			return false;
		}
		n /= 10;
	}
	return true;
}

// Hàm liệt kê các số chỉ toàn chữ số lẻ
void listAllOddDigitNum(int a[], int n) {
	cout << "(Cac) so chi toan cac chu so le la: ";
	for (int i = 0; i < n; i++) {
		if (isAllOddDigitNum(a[i])) {
			cout << a[i] << " ";
		}
	}
}

// Hàm kiểm tra số chỉ toàn chữ số chẵn
bool isAllEvenDigitNum(int n) {
	while (n != 0) {
		int r = n % 10;
		if (r % 2 != 0) {
			return false;
		}
		n /= 10;
	}
	return true;
}

// Hàm liệt kê các số chỉ toàn chữ số chẵn
int countAllEvenDigitNum(int a[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (isAllEvenDigitNum(a[i])) {
			count++;
		}
	}
	return count;
}

// Hàm tìm các số chẵn trong mảng có 2 số lân cận trái phải cũng là số chẵn
void findEvenNumHasEvenNeighbors(int a[], int n) {
	int count = 0;
	cout << "(Cac) so chan trong mang co 2 so lan can trai phai cung la so chan la: ";
	for (int i = 1; i < n - 1; i++) {
		if (a[i] % 2 == 0 && a[i-1] % 2 == 0 && a[i+1] % 2 == 0) {
			cout << a[i] << " ";
			count++;
		}
	}
	if (count == 0) {
		cout << "khong co";
	}
	cout << endl;
}

// Hàm kiểm tra chữ số đầu tiên của số là số lẻ
bool checkFirstDigitOdd(int n) {
	while (n >= 10) {
		n /= 10;
	}
	return (n % 2 != 0) ? true : false;
}

// Hàm liệt kê các số có chữ số đầu tiên là số lẻ
void listAllFirstDigitOddNum(int a[], int n) {
	cout << "(Cac) so co chu so dau tien la so le la: ";
	for (int i = 0; i < n; i++) {
		if (checkFirstDigitOdd(a[i])) {
			cout << a[i] << " ";
		}
	}
}