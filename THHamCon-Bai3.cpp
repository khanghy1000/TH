#include <iostream>
#include <cstdint>
using namespace std;

bool DoiXung(int64_t *arr, int soPhanTu) {
	for (int i = 0; i < soPhanTu/2; i++) {
		if (*(arr + i) != *(arr + soPhanTu - 1 - i)) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int64_t arr[100][100];
	int arrCase[100];
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int phantu = 0;
		cin >> phantu;
		arrCase[i] = phantu;
		for (int j = 0; j < phantu; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		int64_t arr2[100];
		for (int j = 0; j < arrCase[i]; j++) {
			arr2[j] = arr[i][j];
		}
		if (DoiXung(arr2, arrCase[i])) cout << "YES" << endl;
		else cout << "NO" << endl;
	}


	system("pause");
	return 0;
}