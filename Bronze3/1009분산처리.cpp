// HINT : ū �� ������ ���� �ʰ��̹Ƿ� 1�� �ڸ� ���� ���� �� (���й���)

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