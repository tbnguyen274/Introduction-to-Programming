#include "MyFunctions.h"

void createRandomInt(int& n, int left, int right) {
	n = rand() % (right - left + 1) + left;
}

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void createRandomArr(int a[], int n, int left, int right) {
	for (int i = 0; i < n; i++) {
		createRandomInt(a[i], left, right);	// sinh số ngẫu nhiên cho a[i]

		// thực hiện sắp xếp tăng dần ngay khi sinh ra
		for (int j = 0; j < i; j++) {
			if (a[j] > a[i]) {
				swap(a[i], a[j]);
			}
		}
	}
}

void outputArray(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

// Hàm xoá đi phần tử trùng lặp
void removeRepetition(int a[], int& n) {
	for (int i = 0; i < n - 1; i++) {
		if (a[i] == a[i + 1]) {
			for (int j = i; j < n - 1; j++) {
				a[j] = a[j + 1];
			}
			i--;	// tiếp tục xét tại i
			n--;	// giảm số lượng phần tử trong mảng
		}
	}
}

// Hàm đưa số lớn nhất lên vị trí đầu tiên
void moveMaxToFirst(int a[], int n) {
	int temp = a[n - 1];	// lưu giá trị cuối cùng (max) vào biến nhớ temp

	for (int i = n - 1; i > 0; i--) {
		a[i] = a[i - 1];	// dịch các phần tử sang phải 1 ô
	}

	a[0] = temp;	// cập nhật giá trị đầu tiên của mảng là max
}

// Hàm đảo ngược thứ tự số chẵn trong mảng
void reverseEvenOrder(int a[], int n) {
	const int MAX_SIZE = 100;

	// khởi tạo hai mảng chứa số chẵn và chỉ số của chúng
	int* evenArr = nullptr;
	int* evenIndex = nullptr;

	evenArr = new int[MAX_SIZE];
	evenIndex = new int[MAX_SIZE];

	int count = 0;	// đếm số các số chẵn

	// Thêm các số chẵn và chỉ số của chúng vào hai mảng evenArr[] và evenIndex[]
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			evenArr[count] = a[i];
			evenIndex[count++] = i;
		}
	}

	// Đảo ngược các phần tử của mảng evenArr[]
	for (int i = 0; i < count / 2; i++) {
		swap(evenArr[i], evenArr[count - 1 - i]);
	}

	// Cập nhật các số chẵn đã sắp xếp ngược lại ở mảng evenArr[] vào a[]
	//  lần lượt theo các vị trí trong evenIndex[]
	for (int i = 0; i < count; i++) {
		a[evenIndex[i]] = evenArr[i];
	}

	// Thu hồi bộ nhớ
	delete[] evenArr;
	delete[] evenIndex;
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

int findNearestPrime(int n) {
	int left = n - 1;
	int right = n + 1;

	// ở đây nếu n có là số nguyên tố hay không thì đều thực hiện
	// tìm số số nguyên tố gần nhất để thay thế
	do {
		// Nếu số n cùng cách đều tới 2 số nguyên tố gần nhất ở hai bên 
		// thì chọn số nhỏ hơn
		if (isPrime(left--)) {
			return left + 1;
		}

		if (isPrime(right++)) {
			return right - 1;
		}

	} while (true);
}

// Hàm thay thế các phần tử với số nguyên tố gần nó nhất
void replaceWithNearestPrime(int a[], int n) {
	for (int i = 0; i < n; i++) {
		a[i] = findNearestPrime(a[i]);
	}
}