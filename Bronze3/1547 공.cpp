#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int x, y;
	int cup = 1;
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> x >> y;

		if (cup == x)
			cup = y;
		else if (cup == y)
			cup = x;
	}
	cout << cup;

}