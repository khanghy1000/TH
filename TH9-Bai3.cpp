#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string hoTen;
	getline(cin, hoTen);
	transform(hoTen.begin(), hoTen.end(), hoTen.begin(), ::tolower);
	char ho = hoTen[0], dem;
	string ten;

	for (int i = 0; i < hoTen.size(); i++) {
		if (hoTen[i] == ' ') {
			dem = hoTen[i + 1];
			break;
		}
	}

	for (int i = hoTen.size() - 1; i >= 0; i--) {
		if (hoTen[i] == ' ') {
			for (int j = i+1; j < hoTen.size(); j++) {
				ten.push_back(hoTen[j]);
			}
			break;
		}
	}

	string email = "";
	email.push_back(ho);
	email.push_back(dem);
	email = email + ten + "@ptit.edu.vn";

	cout << email << endl;

	
	system("pause");
	return 0;
}