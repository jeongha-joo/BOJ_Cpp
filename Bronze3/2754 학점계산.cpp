#include <iostream>
#include <string>

using namespace std;

int main() {
	char arr[3] = { 0, };
	cin >> arr;
	if (arr[0] == 'F') {
		cout << "0.0";
		return 0;
	}
	double res = ('E' - arr[0]);

	if (arr[1] == '+') {
		res += 0.3;
	}
	else if (arr[1] == '-') {
		res -= 0.3;
	}
	printf("%.1lf", res);
}