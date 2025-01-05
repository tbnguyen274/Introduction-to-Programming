#include "utils.h"

int main() {
	cout << "Project Line\n\n";

	Line l;

	inputLine(l);

	printLine(l);

	cout << "\nDo dai doan thang la: " << lineLength(l);

	return 0;
}