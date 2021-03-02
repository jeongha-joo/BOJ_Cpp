// 각자 t만큼 통화를 했을 때
// 영식요금제는 10 * (t/30+1)
// 민식요금제는 10 * (t/60+1)

#include <iostream>
#include <algorithm>

using namespace std;
int num, time = 0;
int y, m = 0;

int cellPhoneBill() {
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> time;

		y += 10 * (time / 30 + 1);
		m += 15 * (time / 60 + 1);

	}

	if (y < m)
		cout << "Y " << min(y,m);
	else if (y == m)
		cout << "Y M " << y;
	else
		cout << "M " << min(y,m);

	return 0;
}

int main() {
	cellPhoneBill();
	return 0;

}