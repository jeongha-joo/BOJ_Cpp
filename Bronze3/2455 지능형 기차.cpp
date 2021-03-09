#include <iostream>
using namespace std;

int main() {
	int out = 0, in = 0 , train = 0; 
	int temp=0;

	for (int i = 0; i < 4; i++) {
		cin >> out >> in;
		train -= out;
		train += in;
		if (train >= temp) {
			temp = train;
		}
	}
	cout << temp;
}