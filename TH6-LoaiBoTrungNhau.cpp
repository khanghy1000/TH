#include <iostream>
using namespace std;

int main() {
	int n = 0;
	int arr[100];
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] == arr[j]) {
				for (int k = j + 1; k <= n; k++) {
					arr[k - 1] = arr[k];
				}
				n--;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	system("pause"); 
	return 0;
}