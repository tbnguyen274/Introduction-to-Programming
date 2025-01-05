#include "MyFunctions.h"

int main() {
	// Khoi tao bo sinh so ngau nhien voi thoi gian hien tai
	srand(time(NULL));

	/* cau 1 */
	int n;
	int left = 10;
	int right = 30;
	createRandomInt(n, left, right);
	cout << "1. So nguyen ngau nhien n phat sinh ra trong doan [10, 30] la: " << n << "\n";

	/* cau 2 */
	int* a = nullptr;
	a = new int[n];

	cout << "\n2. Mang sau khi phat sinh da sap xep tang dan la:\n";
	createRandomArr(a, n, 15, 35);	// Cac phan tu cua mang thuoc doan [15,35]
	outputArray(a, n);

	/* cau 3 */
	cout << "\n3. Mang sau khi xoa di cac phan tu trung lap la:\n";
	removeRepetition(a, n);
	outputArray(a, n);

	/* cau 4 */
	cout << "\n4. Mang sau khi dua phan tu lon nhat ve dau mang la:\n";
	moveMaxToFirst(a, n);
	outputArray(a, n);

	/* cau 5 */
	cout << "\n5. Mang sau khi dao nguoc thu tu cac so chan trong mang la:\n";
	reverseEvenOrder(a, n);
	outputArray(a, n);

	/* cau 6 */
	cout << "\n6. Mang sau khi thay moi phan tu voi so nguyen to gan no nhat la:\n";
	replaceWithNearestPrime(a, n);
	outputArray(a, n);

	delete[] a; // thu hồi bộ nhớ sau khi sử dụng

	return 0;
}