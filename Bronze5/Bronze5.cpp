//#include <iostream>
//using namespace std;
//
//int main() {
//	int money = 0, num = 0;
//
//	cin >> money >> num;
//	cout << money / num << endl;
//	cout << money % num;
//
//	return 0;
//
//}

//#include <iostream>
//
//using namespace std;
//
//int main() {
//	
//	int n = 0;
//	int m[] = { 1,1,2,2,2,8 };
//
//	for (int i = 0; i < 6; i++) {
//		cin >> n;
//		cout << m[i] - n << endl;
//	}
//}

//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	int s1, s2, s3 = 0;
//	int m = 0;
//	cin >> s1 >> s2 >> s3;
//
//	if (s1 == s2 && s1 == s3)
//		cout << 10000 + s1 * 1000;
//	else if (s1 == s2)
//		cout << 1000 + s1 * 100;
//	else if (s2 == s3)
//		cout << 1000 + s2 * 100;
//	else if (s1 == s3)
//		cout << 1000 + s1 * 100;
//	else {
//		m = max(s1, s2);
//		m = max(m, s3);
//		cout << m * 100;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//	int nh= 0, nm= 0, cook = 0;
//	cin >> nh >> nm;
//	cin >> cook;
//
//	if (nm + cook > 59) {
//		nh += (nm + cook) / 60;
//		if (nh > 23)
//			nh %= 24;
//		cout << nh << '\n' << (nm+cook) % 60;
//	}
//	else {
//		nm += cook % 60;
//		cout << nh << '\n' << nm;
//	}
//		
//}

#include <iostream>
using namespace std;

int main() {
	int n1, n2;
	cin >> n1 >> n2;

	int one, ten, hun;
	one = n2 % 10;
	ten = ((n2 - one)%100)/10;
	hun = n2 / 100;

	cout << n1 * one << '\n';
	cout << n1 * ten << '\n';
	cout << n1 * hun << '\n';
	cout << (n1 * one) + (n1 * ten * 10) + (n1 * hun * 100);
}