// stringŸ������ ���� �Է� �ް�
// �ѱ��ڶ� �Է¹޾Ƶ� ���� 1 + 1�� ����� ������ 2�� size �ʱ�ȭ
// 0 �Է½� break, ������� for�� ��� auto�� �ڷ��� �����Ӱ�?

#include <iostream>

using namespace std;

int main() {

	while (true) {
		string number;
		int size = 2;

		cin >> number;

		if (number.length()== 1 && number[0] == '0')
			break;
		for (auto i : number) {
			if (i == '0')
				size += 4;
			else if (i == '1')
				size += 2;
			else
				size += 3;
		}
		// ���� ���̻��̿� 1cm ���� �ֱ�
		size += number.length() - 1;
		cout << size << endl;
	}
}