#include "MyFunctions.h"

int main() {
	int n;
	nhapSoDuong(n);

	if (ktSoHoanHao(n)) {
		cout << n << " la so hoan hao" << endl;
	}
	else {
		cout << n << " khong la so hoan hao" << endl;
	}

	int max = findMax(n);
	cout << "Chu so lon nhat cua " << n << " la: " << max << endl;

	return 0;
}