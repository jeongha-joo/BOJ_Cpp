// string타입으로 문자 입력 받고
// 한글자라도 입력받아도 양쪽 1 + 1이 생기기 때문에 2로 size 초기화
// 0 입력시 break, 범위기반 for문 사용 auto로 자료형 자유롭게?

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
		// 글자 사이사이에 1cm 간격 주기
		size += number.length() - 1;
		cout << size << endl;
	}
}