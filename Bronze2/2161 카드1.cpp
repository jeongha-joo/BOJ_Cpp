#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue<int> imq;
	int n = 0;
	cin >> n;

	// 1���� �Է°���ŭ ť�� ����
	for (int i = 1; i <= n; i++) {
		imq.push(i);
	}

	while (true) {
		if (imq.size() == 1) break;
		int card = imq.front();		// �� �տ� �ִ� ���ڸ� card ������ ������ ��
		imq.pop();					// �� �տ� �ִ� ���� ����
		cout << card << " ";
		
		if (imq.size() == 1) break;
		int cur = imq.front();		// �� �տ� �ִ� ���ڸ� cur ������ ������ ��
		imq.pop();					// �� �տ� �ִ� ���� ����
		imq.push(cur);				// cur������ �ִ� ���� imq �� �ڷ� push
	}
	// ������ �ϳ� ���� ���� �� �ڿ� ���
	cout << imq.front();
}