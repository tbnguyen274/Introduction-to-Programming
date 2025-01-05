#include "MyFunctions.h"

int main() {

	// Khởi tạo bộ sinh số ngẫu nhiên với thời gian hiện tại
	srand(time(NULL));

	/*cau 1*/ 
	cout << "Cau 1. ";
	int n;
	int left = 10;
	int right = 30;
	n = randomInt(left, right);
	cout << "So nguyen ngau nhien n sinh ra trong doan [10, 30] la: " << n << endl;

	/* cau 2 */
	const int MAX_SIZE = 100;
	int a[MAX_SIZE];
	randomArray(a, n, 10, 100);	// Phat sinh mang ngau nhien n phan tu thuoc doan [10;100]

	/* cau 3 */ 
	sortIncrease(a, n);

	/* cau 4 */ 
	cout << "Cau 4. ";
	cout << "Cac phan tu thuoc mang la: ";
	outputArray(a, n);
	cout << endl;

	/* cau 5 */ 
	cout << "Cau 5. " << endl;
	int max = findMax(a, n);
	int min = findMin(a, n);
	double average = findAverage(a, n);
	int sum = findSum(a, n);

	cout << "Gia tri lon nhat trong mang la: " << max << endl;
	cout << "Gia tri nho nhat trong mang la: " << min << endl;
	cout << "Gia tri trung binh trong mang la: " << average << endl;
	cout << "Tong cac phan tu cua mang la: " << sum << endl;

	/* cau 6 */ 
	cout << "Cau 6. " << endl;
	int count_even = countEven(a, n);
	int count_odd = countOdd(a, n);

	cout << "So luong cac so chan trong mang la: " << count_even << endl;
	cout << "So luong cac so le trong mang la: " << count_odd << endl;

	/* cau 7 */ 
	cout << "Cau 7. ";
	if (checkSquared(a, n)) {
		cout << "Mang co ton tai so chinh phuong" << endl;
	}
	else {
		cout << "Mang khong ton tai so chinh phuong" << endl;
	}

	/* cau 8 */ 
	cout << "Cau 8. ";
	listPrime(a, n);
	cout << endl;

	/* cau 9 */ 
	cout << "Cau 9. ";
	findFirstDividendOf3(a, n);

	/* cau 10 */ 
	cout << "Cau 10. ";
	findLastPrime(a, n);
	cout << endl;

	//cau 11 
	cout << "Cau 11. ";
	int count_palindrome = countPalindrome(a, n);
	cout << "So luong so doi xung trong mang la: " << count_palindrome << endl;

	//cau 12
	cout << "Cau 12. ";
	findFirstDividendOf5(a, n);

	//cau 13
	cout << "Cau 13. ";
	findBoundary(a, n);

	//cau 14
	cout << "Cau 14. ";
	findNumEqualSumLocal(a, n);

	//cau 15
	cout << "Cau 15. ";
	int GCD = findArrayGCD(a, n);
	cout << "Uoc chung lon nhat cua tat ca cac so trong mang la: " << GCD << endl;

	//cau 16
	cout << "Cau 16. ";
	listAllOddDigitNum(a, n);
	cout << endl;

	//cau 17
	cout << "Cau 17. ";
	int count_num_all_even = countAllEvenDigitNum(a, n);
	cout << "So cac so chi toan chu so chan la: " << count_num_all_even << endl;

	//cau 18
	cout << "Cau 18. ";
	findEvenNumHasEvenNeighbors(a, n);

	//cau 19
	cout << "Cau 19. ";
	listAllFirstDigitOddNum(a, n);

	return 0;
}