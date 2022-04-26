#include <iostream>
#include <string>
using namespace std;

bool SoKhongGiam(string S) {
	for (int i = 0; i < S.size() - 1; i++) {
		int a = S[i] - '0';
		int b = S[i + 1] - '0';
		if (a > b) return 0;
	}
	return 1;
}

int main() {
	string arr[100];
	int n = 0;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		getline(cin, arr[i]);
	}

	for (int i = 0; i < n; i++) {
		if (SoKhongGiam(arr[i])) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	system("pause");
	return 0;
}