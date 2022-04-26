#include <iostream>
using namespace std;

bool LaSoNguyenTo(int a) {
	if (a < 2) return 0;
	for (int i = 2; i <= sqrt(a); i++) {
		if (a % i == 0) return 0;
	}
	return 1;
}

int main() {
	int arr[30][30];
	int n = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	int max = 0;
	int maxIndex = 0;
	for (int i = 0; i < n; i++) {
		int p = 0;
		for (int j = 0; j < n; j++) {
			if (LaSoNguyenTo(arr[i][j])) {
				p++;
			}
		}
		if (p > max) {
			max = p;
			maxIndex = i;
		}
	}

	cout << maxIndex + 1 << endl;

	for (int j = 0; j < n; j++) {
		if (LaSoNguyenTo(arr[maxIndex][j])) {
			cout << arr[maxIndex][j] << " ";
		}
	}

	cout << endl;

	system("pause");
	return 0;
}