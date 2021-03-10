#include <iostream>
using namespace std;

int main() {
	int change[4] = { 25, 10, 5, 1 };
	int n = 0, money = 0;

	cin >> n;

	while (n--) {
		cin >> money;
		for (int i = 0; i < 4; i++) {
			cout << money / change[i] << " ";
			money %= change[i];
		}
		cout << endl;
	}

}