#include "utils.h"

int main() {
	// Khoi tao bo sinh so ngau nhien voi thoi gian hien tai
	srand(time(NULL));

	/* cau 1 */
	int m ,n;
	int left = 10;
	int right = 30;
	createRandomInt(m, left, right);
	createRandomInt(n, left, right);
	cout << "1.\n";
	cout << "So nguyen ngau nhien m phat sinh ra trong doan [10, 30] la: " << m << "\n";
	cout << "So nguyen ngau nhien n phat sinh ra trong doan [10, 30] la: " << n << "\n";

	/* cau 2 */
	int a[MAX_ROWS][MAX_COLS];
	int rowsCount = m;
	int colsCount = n;

	int elementLeftBound = 15;
	int elementRightBound = 100;
	createRandomMatrix(a, rowsCount, colsCount, elementLeftBound, elementRightBound);

	/* cau 3 */
	cout << "3. In ma tran ra man hinh:\n";
	outputMatrix(a, rowsCount, colsCount);
	cout << endl;

	/* cau 4 */
	int sumFirstRow = calculateSumFirstRow(a, rowsCount, colsCount);
	int sumLastCol = calculateSumLastCol(a, rowsCount, colsCount);

	cout << "4.\n";
	cout << "Tong cac so tren dong dau tien la: " << sumFirstRow << endl;
	cout << "Tong cac so tren cot cuoi cung la: " << sumLastCol << endl;
	cout << endl;

	/* cau 5 */
	int maxMatrix = findMatrixMax(a, rowsCount, colsCount);
	int minMatrix = findMatrixMin(a, rowsCount, colsCount);

	cout << "5.\n";
	cout << "So lon nhat trong ma tran la: " << maxMatrix << endl;
	cout << "So nho nhat trong ma tran la: " << minMatrix << endl;
	cout << endl;

	/* cau 6 */
	int countPrimeMatrix = countMatrixPrime(a, rowsCount, colsCount);

	cout << "6. So luong so nguyen to trong ma tran la: " << countPrimeMatrix << endl;
	cout << endl;

	/* cau 7 */
	cout << "7. ";
	informPalindromeinMatrix(a, rowsCount, colsCount);
	cout << endl;

	/* cau 8 */
	cout << "8. ";
	informMaxPrimeOfMatrix(a, rowsCount, colsCount);
	cout << endl;

	/* cau 9 */
	cout << "9. ";
	informRowsSortedDecrease(a, rowsCount, colsCount);
	cout << endl;

	/* cau 10 */
	swapFirstAndLastCols(a, rowsCount, colsCount);
	cout << "10.In ma tran da hoan vi ra man hinh:\n";
	outputMatrix(a, rowsCount, colsCount);

	return 0;
}