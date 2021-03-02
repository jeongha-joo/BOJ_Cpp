#include <iostream>
#include <algorithm>

using namespace std;

int x, y, w, h;

int minRectangle() {
	int temp = min(w - x, x);
	temp = min(temp, min(h - y, y));
	return temp;
}

int main() {
	cin >> x >> y >> w >> h;
	cout << minRectangle();
	return 0;
}
