#include <iostream>
#include <string>
using namespace std;

bool ThuanNghich(string S) {
	for (int i = 0; i < S.size()/2; i++) {
		if (S[i] != S[S.size() - 1 - i]) return 0;
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
		cout << arr[i] << endl;
	}

	for (int i = 0; i < n; i++) {
		if (ThuanNghich(arr[i])) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	system("pause");
	return 0;
}