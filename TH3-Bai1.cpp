#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	int arr[50];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int count = 1;

	for (int i = 1; i < n; i++) {
		if (arr[i - 1] <= arr[i]) {
			count++;
		}
	}

	cout << count << endl;

	system("pause");
	return 0;
}