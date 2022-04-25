#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	int a = 0, b = 0;
	cin >> a >> b;
	string str1 = to_string(a);
	string str2 = to_string(b);

	int sum1 = 0, sum2 = 0;

	for (int i = 0; i < str1.size(); i++) {
		stringstream obj;
		int a = 0;
		obj << str1[i];
		obj >> a;
		sum1 += a;
	}

	for (int i = 0; i < str2.size(); i++) {
		stringstream obj;
		int a = 0;
		obj << str2[i];
		obj >> a;
		sum2 += a;
	}

	if (sum1 > sum2) {
		cout << b << " " << a << endl;
	}
	else {
		cout << a << " " << b << endl;
	}

	system("pause"); 
	return 0;
}
