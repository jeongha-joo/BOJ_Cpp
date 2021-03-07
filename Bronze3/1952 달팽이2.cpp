#include <iostream>
using namespace std;

bool visited[100][100];
int dx[] = { 0,1,0,-1 };
int dy[] = { 1,0,-1,0 };

int main() {
	int m, n;
	cin >> m >> n;	// m = 5; n = 3;

	int x = 0, y = 0;
	int dir = 0;
	int answer = 0;

	while (1) {
		if (visited[x][y]) {
			cout << answer-1 << endl;
			return 0;
		}
		visited[x][y] = true;
		int nextX = x + dx[dir];
		int nextY = y + dy[dir];

		if (nextX < 0 || nextY < 0 || nextX >= m || nextY >= n || visited[nextX][nextY]) {
			dir = (dir + 1) % 4;
			nextX = x + dx[dir];
			nextY = y + dy[dir];
			answer++;
		}
		x = nextX;
		y = nextY;
	}
}