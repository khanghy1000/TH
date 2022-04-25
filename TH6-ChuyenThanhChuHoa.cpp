#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string S;
	getline(cin, S);
	transform(S.begin(), S.end(), S.begin(), ::toupper);

	cout << S;

	system("pause"); 
	return 0;
}