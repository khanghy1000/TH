#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n = 0;
	int arr[50];

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	float sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}

	sum /= n;

	cout << fixed << setprecision(3) << sum << endl;

	system("pause"); 
	return 0;
}