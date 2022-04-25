#include <iostream>
#include <string>
using namespace std;

int main() {
	int SoChuCai = 0, SoChuSo = 0, SoKyTu = 0;

	string S;
	getline(cin, S);

	for (int i = 0; i < S.size(); i++) {
		int a = S[i];
		if ((65 <= a && a <= 90) || (97 <= a &&  a <= 122)) {
			SoChuCai++;
		}
		else if (48 <= a && a <= 57) {
			SoChuSo++;
		}
		else SoKyTu++;
	}

	cout << SoChuCai << " " << SoChuSo << " " << SoKyTu << endl;

	system("pause"); 
	return 0;
}