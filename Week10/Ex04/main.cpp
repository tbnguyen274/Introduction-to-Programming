#include "utils.h"

int main() {
	cout << "Project Triangle\n\n";

	Triangle ABC;
	inputTriangle(ABC);

	if (!isValidTriangle(ABC)) {
		cout << "3 diem vua nhap khong tao thanh mot tam giac hop le";
	}
	else {
		cout << "3 diem vua nhap tao thanh mot tam giac hop le\n";

		findType(ABC);
		cout << "Chu vi tam giac la: " << findPerimeter(ABC) << endl;
		cout << "Dien tich tam giac la: " << findArea(ABC);
	}

	return 0;
}