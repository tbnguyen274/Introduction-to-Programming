#include "MyFunctions.h"

// Input a string
void stringInput(char a[], int count)
{
	cin.ignore(); // Clear the input buffer
	cout << "Nhap chuoi: ";
	cin.get(a, count + 1);
	//cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear any remaining characters in the buffer
	cout << "Ban da nhap chuoi: " << a << endl;
}

void removeMultiSpace(char a[])
{
	for (int i = 0; i < strlen(a); i++) {
		if (((a[i + 1] == ' ' || a[i + 1] == '\0') && a[i] == ' ') || a[0] == ' ') {
			for (int j = i; j < strlen(a); j++) {
				a[j] = a[j + 1];
			}

			i--;
			
		}
	}
}

// Count the total number of words in a string
int countStringWord(char a[]) {
	int wordCount = 0;

	removeMultiSpace(a);

	for (int i = 0; i < strlen(a); i++) {
		if (' ' == a[i]) {
			wordCount++;
		}
	}
	wordCount++;	//cong them tu cuoi cung truoc null terminator

	return wordCount;
}

// Print each word in a separate line
void printEachWord(char a[]) {
	removeMultiSpace(a);
	cout << "In tung tu trong chuoi tren cac dong khac nhau: " << endl;
	for (int i = 0; i < strlen(a); i++) {
		
		if (' ' == a[i]) {
			cout << endl;
		}
		else {
			cout << a[i];
		}
	}
	cout << endl;
}

/* Find the longest word in a string and print the
the length of that word. */
void findLongestWord(char a[]) {
	removeMultiSpace(a);

	char longest[100];
	int countChar = 0;	// so ki tu cua tu hien tai
	int countLongest = 0;	// so ki tu cua tu dai nhat
	int index = 0;

	for (int i = 0; i < strlen(a); i++) {
		if (' ' == a[i]) {
			if (countChar > countLongest) {
				countLongest = countChar;
				index = i - countLongest;	//vi tri cua chu cai bat dau tu dai nhat
			}
			countChar = 0;	// reset de dem so ki tu cua tu tiep theo
		}
		else {
			countChar++;	// tang bien dem ki tu
		}
	}

	// kiem tra tu cuoi cung vi sau no khong co khoang trang
	if (countChar > countLongest) {
		countLongest = countChar;
		index = strlen(a) - countLongest;
	}

	// Luu tu dai nhat vao chuoi longest[]
	for (int i = 0; i < countLongest; i++) {
		longest[i] = a[i + index];
	}
	longest[countLongest] = '\0';

	cout << "Tu co do dai lon nhat trong chuoi la: " << longest << endl;
	cout << "Do dai cua tu do la: " << countLongest << " ki tu" << endl;
}

/* Find the first n characters substring from
specified position */
void findFirstSubstring(char a[]) {

	int pos;
	do {
		cout << "Nhap vi tri bat dau truy xuat: ";
		cin >> pos;
	} while (pos < 0 || pos >= strlen(a));
	
	int n;
	do {
		cout << "Nhap so ki tu can truy xuat: ";
		cin >> n;
	} while (pos + n > strlen(a));
	
	for (int i = pos; i < pos + n; i++) {
		cout << a[i];
	}
}

/* Find the last n characters substring from
specified position */
void findLastSubstring(char a[]) {

	int pos;
	do {
		cout << "Nhap vi tri bat dau truy xuat: ";
		cin >> pos;
	} while (pos <= 0 || pos > strlen(a));

	int n;
	do {
		cout << "Nhap so ki tu can truy xuat: ";
		cin >> n;
	} while (n > pos);
	
	for (int i = pos - n; i < pos; i++) {
		cout << a[i];
	}
}

/* Find the substring starts at a specified
character position and has a specified length */
void findSubString(char a[]) {

	int pos;
	do {
		cout << "Nhap vi tri ki tu bat dau truy xuat: ";
		cin >> pos;
	} while (pos < 0 || pos >= strlen(a));

	int n;
	do {
		cout << "Nhap so ki tu can truy xuat: ";
		cin >> n;
	} while (pos + n > strlen(a));

	for (int i = pos; i < pos + n; i++) {
		cout << a[i];
	}
}
