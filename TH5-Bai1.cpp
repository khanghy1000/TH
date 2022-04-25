#include <iostream>
#include <string>
using namespace std;

int main() {
	string S;
	getline(cin, S); 

	for (int i = 0; i < S.size(); i++) {
		if (S[i] == ' ') cout << endl;
		else cout << S[i];
	}
	cout << endl;

	system("pause"); 
	return 0;
}