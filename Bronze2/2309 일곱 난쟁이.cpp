#include <iostream>
#include <algorithm>
#define SIZE 9

using namespace std;

int main(void) {
	int tall[SIZE] = { 0, };
	int temp = 0;
	bool fleg = false;

	for (int i = 0; i < SIZE; i++) {
		cin >> tall[i];
		temp += tall[i];
	}

	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < SIZE; j++) {
			if (temp - (tall[i] + tall[j]) == 100) {
				tall[i] = -1;	// 배열 맨 앞으로 이동하기 위해 -1 대입
				tall[j] = -1;
				fleg = true;
				break;
			}
		}
		if (fleg) break;
	}

	sort(tall, tall + SIZE);

	// 배열 맨 앞의 2자리는 -1이기 때문에 2번째부터 출력
	for (int i = 2; i < SIZE; i++) {
		cout << tall[i] << endl;
	}
	return 0;
}