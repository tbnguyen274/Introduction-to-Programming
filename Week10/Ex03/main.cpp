#include "utils.h"

int main() {
	cout << "Project Date\n\n";

	Date date;

	cout << "Nhap vao thong tin 1 ngay\n";
	inputDate(date);

	if (!isValidDate(date)) {
		cout << "Thong tin khong tao thanh ngay hop le";
	}
	else {
		cout << "Ngay vua nhap la: ";
		outputDate(date);

		Date nextday = findNextDay(date);
		cout << "Ngay ke tiep la: ";
		outputDate(nextday);
	}

	return 0;
}