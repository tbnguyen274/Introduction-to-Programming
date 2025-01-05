#include "MyFunctions.h"

int main() {
	char s[100];
	int countChar = 100;
	int choice;
	
	do {
		cout << "Menu C_String\n\n";
		cout << "0. Thoat chuong trinh\n";
		cout << "1. Dem tong so tu trong chuoi\n";
		cout << "2. In moi tu trong chuoi tren mot dong\n";
		cout << "3. Tim tu dai nhat trong chuoi in ra do dai tu do\n";
		cout << "4. Tim chuoi con dau tien co n ki tu tu vi tri xac dinh\n";
		cout << "5. Tim chuoi con cuoi cung co n ki tu tu vi tri xac dinh\n";
		cout << "6. Tim chuoi con bat dau tai mot vi tri ki tu xac dinh va co do dai xac dinh\n\n";
		
		cout << "Nhap chuc nang can thuc hien: ";
		cin >> choice;
		
		
		if (choice >= 1 && choice <= 6) {
			
			stringInput(s, countChar);	// Nhap chuoi

			switch (choice) {
			case 1:
				cout << "Tong so tu trong chuoi la: " << countStringWord(s) << endl;
				break;

			case 2:
				printEachWord(s);
				break;

			case 3:
				findLongestWord(s);
				break;

			case 4:
				findFirstSubstring(s);
				cout << endl;
				break;

			case 5:
				findLastSubstring(s);
				cout << endl;
				break;
			case 6: 
				findSubString(s);
				cout << endl;
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