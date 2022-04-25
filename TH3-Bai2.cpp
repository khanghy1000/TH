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
	int SoTest = 0;
	cin >> SoTest;

	for (int q = 1; q <= SoTest; q++) {
		//cout << "Test " << q << ": " << endl;
		int arr[100];
		int n = 0;
		cin >> n;

		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		cout << "Test " << q << ": " << endl;

		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (arr[i] > arr[j]) {
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}

		for (int i = 0; i < n; i++) {
			if (LaSoNguyenTo(arr[i])) {
				int count = 1;
				for (int j = i + 1; j < n; j++) {
					if (arr[i] == arr[j]) {
						count++;
					}
					else {
						cout << arr[i] << " xuat hien " << count << " lan" << endl;
						i = j-1;
						break;
					}
				}
			}
		}
		
	}

	system("pause"); 
	return 0;
}