
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b;
	int temp = 0;

	cin >> a >> b;
	a--;
	b--;

	if (a > b) swap(a, b);
	while ((a/4) != (b/4)) {
		temp++;
		a += 4;
	}
	cout << temp + abs(a - b);
}
