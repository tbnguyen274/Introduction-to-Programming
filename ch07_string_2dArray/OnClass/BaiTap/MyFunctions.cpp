#include "MyFunctions.h"

void stringInput(char a[], int count)
{
	cout << "Nhap chuoi: ";
	cin.get(a, count + 1);
	cout << a << endl;
}

void convertLowerCase(char a[]) {
	for (int i = 0; i < strlen(a); i++) {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			a[i] += 32;
		}
	}
	cout << a << endl;
}

void convertUpperCase(char a[]) {
	for (int i = 0; i < strlen(a); i++) {
		if (a[i] >= 'a' && a[i] <= 'z') {
			a[i] -= 32;
		}
	}
	cout << a << endl;
}

void upperFirstWord(char a[])
{
	for (int i = 0; i < strlen(a); i++) {
		if ((i == 0 || a[i - 1] == ' ') && a[i] >= 'a' && a[i] <= 'z') {
			if (a[i] -= 32) {
				a[i] -= 32;
			}
			
		}
		
	}
	cout << a << endl;
}

void removeMultiSpace(char a[])
{
	int n = strlen(a);
	for (int i = 0; i < n; i++) {
		if (((a[i] == ' ' || a[i] == '\0') && a[i - 1] == ' ') || a[0] == ' ') {
			for (int j = i; j < n; j++) {
				a[j] = a[j + 1];
			}
			
			i--;
			n--;
		}
	}
	cout << a << endl;
}
