#include <iostream>
using namespace std;

int main() {
	int arr[100];
	int n = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int arr2[100];
	int k = 0;
	cin >> k;

	for (int i = 0; i < k; i++) {
		arr2[i] = arr[i];
	}
	cout << endl;

	for (int i = k; i < n; i++) {
		arr[i - k] = arr[i];
	}

	int j = 0;
	for (int i = n - k; i < n; i++) {
		if (j < k) {
			arr[i] = arr2[j];
			j++;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	system("pause");
	return 0;
}