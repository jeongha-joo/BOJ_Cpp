
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b, i;
	int large, small = 0;
	int temp = 0;

	cin >> a >> b;
	large = max(a, b);
	small = min(a, b);
	large--;
	small--;

	if (a == b || (large - small)%4 == 0) return 0;
	while ((small/4) != (large/4)) {
		temp++;
		small += 4;
	}
	cout << temp + abs(large - small);
}