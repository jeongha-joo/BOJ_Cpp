#include <iostream>

using namespace std;

int star(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i; j <= n - 1; j++) {
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