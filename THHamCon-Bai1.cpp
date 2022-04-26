#include <iostream>
using namespace std;

int tong(int a, int b) {
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
	int tong = 0;
	for (int i = a; i <= b; i++) {
		tong += i;
	}
	return tong;
}

int main() {
	int a = 0, b = 0;
	cin >> a >> b;
	cout << tong(a, b) << endl;
	
	system("pause");
	return 0;
}