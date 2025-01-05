#include "MyFunctions.h"

int main() {
	
	int a[MAX_ROWS][MAX_COLS];
	int aTranpose[MAX_ROWS][MAX_COLS];
	int rowsCount = 0;
	int colsCount = 0;
	int b[MAX_ROWS][MAX_COLS];
	int size = 0;

	int choice;
	
	do {
		cout << "Menu 2D Array\n\n";
		cout << "0. Thoat chuong trinh\n";
		cout << "1. Tim cot co tong cac phan tu lon nhat trong mang\n";
		cout << "2. Tim phan tu lon nhat cua moi cot trong ma tran\n";
		cout << "3. Tim tong cac phan tu trong ma tran ngoai tru cac phan tu tai hang va cot xac dinh\n";
		cout << "4. Tim tong cua hang va cot chinh giua cua ma tran\n";
		cout << "5. Tim phan tu nho nhat cua moi hang va moi cot trong ma tran\n";
		cout << "6. Kiem tra tong cua hang thu i va cot thu i trong ma tran co bang nhau khong\n";
		cout << "7. Tim ma tran chuyen vi cua ma tran hien tai\n";
		cout << "8. Tim tong cac phan tu tren cac duong cheo cua ma tran vuong\n";
		cout << "9. Tim tong cac phan tu nam phia tren duong cheo chinh va duong cheo phu cua ma tran vuong\n";
		cout << "10. Tim tong cac phan tu nam phia duoi duong cheo chinh va duong cheo phu cua ma tran vuong\n\n";

		cout << "Nhap chuc nang can thuc hien: ";
		cin >> choice;


		if (choice >= 1 && choice <= 7) {
			cout << "Nhap vao ma tran" << endl;
			inputMatrix(a, rowsCount, colsCount);	// Nhap ma tran
			cout << "Ma tran vua nhap: " << endl;
			outputMatrix(a, rowsCount, colsCount);

			int rowExclude;
			int colExclude;

			int indexCount = (rowsCount > colsCount) ? rowsCount : colsCount;

			switch (choice) {
				case 1:
					cout << "Cot co tong gia tri lon nhat trong mang la: ";
					cout << findColWithMaxSum(a, rowsCount, colsCount) << endl;
					break;

				case 2:
					printMaxOfCols(a, rowsCount, colsCount);
					cout << endl;
					break;

				case 3:
					do {
						cout << "Nhap hang muon loai: ";
						cin >> rowExclude;
					} while (rowExclude < 0 || rowExclude >= rowsCount);

					do {
						cout << "Nhap cot muon loai: ";
						cin >> colExclude;
					} while (colExclude < 0 || colExclude >= colsCount);
					
					cout << "Tong cac phan tu trong ma tran ngoai tru cac phan tu tai hang " << rowExclude
						<< " va cot " << colExclude << " la: " << sumExceptRowAndColumn(a, rowsCount, colsCount, rowExclude, colExclude);
					cout << endl;
					break;

				case 4:
					if (rowsCount % 2 == 0) {
						cout << "Khong co hang nam chinh giua ma tran" << endl;
					}

					else if (colsCount % 2 == 0) {
						cout << "Khong co cot nam chinh giua ma tran" << endl;
					}

					else {
						cout << "Tong cua hang chinh giua cua ma tran la: ";
						cout << sumMiddleRow(a, rowsCount, colsCount) << endl;

						cout << "Tong cua cot chinh giua cua ma tran la: ";
						cout << sumMiddleCol(a, rowsCount, colsCount) << endl;

						cout << "Tong cua hang va cot chinh giua cua ma tran la: ";
						cout << sumMiddleRowAndCol(a, rowsCount, colsCount) << endl;
					}
					break;

				case 5:
					printMinOfRows(a, rowsCount, colsCount);
					printMinOfCols(a, rowsCount, colsCount);
					break;

				case 6:					
					for (int i = 0; i < indexCount; i++) {
						if (checkSumRowEqualCol(a, rowsCount, colsCount, i)) {
							cout << "Tong cua hang va cot " << i << " la bang nhau" << endl;
						}
						else {
							cout << "Tong cua hang va cot " << i << " khong bang nhau" << endl;
						}
					}
					break;

				case 7:
					cout << "Ma tran chuyen vi: " << endl;
					findTransposeMatrix(a, rowsCount, colsCount, aTranpose);
					break;

			}
		}
		else if (choice >= 8 && choice <= 10) {
			cout << "Nhap vao ma tran vuong\n";
			inputSquareMatrix(b, size);	// Nhap ma tran vuong
			cout << "Ma tran vua nhap: " << endl;
			outputSquareMatrix(b, size);

			switch (choice) {
			case 8:
				findSumDiagonals(b, size);
				break;

			case 9:
				cout << "Tong cac phan tu nam tren duong cheo chinh la: ";
				cout << sumAbovePrimaryDiagonal(b, size) << endl;

				cout << "Tong cac phan tu nam tren duong cheo phu la: ";
				cout << sumAboveSecondaryDiagonal(b, size) << endl;
				break;

			case 10:
				cout << "Tong cac phan tu nam duoi duong cheo chinh la: ";
				cout << sumBelowPrimaryDiagonal(b, size) << endl;

				cout << "Tong cac phan tu nam duoi duong cheo phu la: ";
				cout << sumBelowSecondaryDiagonal(b, size) << endl;
				break;

			}
		}
		else if (choice == 0) {
			cout << "Ban da thoat chuong trinh" << endl;
		}
		else {
			cout << "Chuc nang khong hop le!" << endl;
		}

		cout << setfill('-');
		cout << setw(100) << "-" << endl;
		
	} while (choice != 0);

	

	return 0;
}