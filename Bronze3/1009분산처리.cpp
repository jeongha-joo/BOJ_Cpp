// HINT : 큰 수 제곱은 범위 초과이므로 1의 자리 수만 보면 됌 (수학문제)

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int a, b;
		cin >> a >> b;

		int result = a;

		for (int i = 2; i <= b; ++i) {
			result = (result * a) % 10;
		}

		if (result % 10 == 0)
			result = 10;
		else if (result > 10)
			result = result % 10;
		cout << result << endl;
	}
	return 0;
}