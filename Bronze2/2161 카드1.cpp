#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue<int> imq;
	int n = 0;
	cin >> n;

	// 1부터 입력값만큼 큐에 저장
	for (int i = 1; i <= n; i++) {
		imq.push(i);
	}

	while (true) {
		if (imq.size() == 1) break;
		int card = imq.front();		// 맨 앞에 있는 숫자를 card 변수에 저장한 후
		imq.pop();					// 맨 앞에 있는 숫자 삭제
		cout << card << " ";
		
		if (imq.size() == 1) break;
		int cur = imq.front();		// 맨 앞에 있는 숫자를 cur 변수에 저장한 후
		imq.pop();					// 맨 앞에 있는 숫자 삭제
		imq.push(cur);				// cur변수에 있는 값을 imq 맨 뒤로 push
	}
	// 마지막 하나 남은 값을 맨 뒤에 출력
	cout << imq.front();
}