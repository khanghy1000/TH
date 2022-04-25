#include <iostream>
#include <string>
#include <sstream>
using namespace std;


int main() {
	string S;
	getline(cin, S);
	string arr[100];
	int words = 1;
	stringstream obj(S);
	for (int i = 0; i < S.size(); i++) {
		if (S[i] == ' ') words++;
	}

	for (int i = 0; i < words; i++) {
		if (obj.good()) {
			obj >> arr[i];
		}
	}

	for (int i = 0; i < words; i++) {
		for (int j = i + 1; j < words; j++) {
			if (arr[i] == arr[j]) {
				for (int k = j + 1; k < words; k++) {
					arr[k - 1] = arr[k];
 				}
				words--;
			} 
		}
	}

	for (int i = 0; i < words; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}