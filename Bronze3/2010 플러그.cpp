#include <iostream>

using namespace std;

int main() {
	int n = 0;
	int tap = 0, temp = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> tap;
		temp += tap;
	}
	cout << temp - n + 1;
}
