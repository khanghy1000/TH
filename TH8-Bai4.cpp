#include <iostream>
#include <string>
using namespace std;

void DoiXung(string S) {
	int d = 0;
	for (int i = 0; i < S.size() / 2; i++) {
		if (S[i] != S[S.size() - 1 - i]) d++;
	}
	if (d <= 1) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main() {
	string arr[20];
	int n = 0;
	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; i++) {
		getline(cin, arr[i]);
	}

	for (int i = 0; i < n; i++) {
		DoiXung(arr[i]);
	}	


	system("pause");
	return 0;
}