#include <iostream>
using namespace std;

int star(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}

int main() {
	int n = 0;
	cin >> n;
	star(n);
}