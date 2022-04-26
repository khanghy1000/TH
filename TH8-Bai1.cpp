#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int arr[100];
	int n = 0;
	float sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	cout << fixed << setprecision(3) << sum / n << endl;

	system("pause");
	return 0;
}