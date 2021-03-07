#include <iostream>

using namespace std;
int main() {
	long long dot = 5;
	long long num = 7;
	int n = 0;

	cin >> n;

	for (int i = 2; i <= n; i++) {
		dot += num;
		num += 3;
		dot = dot % 45678;
	}
	cout << dot << endl;
}