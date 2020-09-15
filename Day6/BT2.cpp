#include <iostream>
#include <chrono>
#define N 51
using namespace std;



int main() {
	freopen("BT2.txt","r",stdin);

	int K, n, m, a[N][N], o[N];
	cin >> K;

	for (int k = 1; k <= K; k++) {
		cin >> n >> m;

		for (int i = 0; i < m; i++) {
			cin >> o[i];
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < 7; j++) {
				cin >> a[i][j];
			}
		}

		int x = n - 1, y = 3;
		int result = a[x][y] == 1 ? 1 : 0;
		for (int i = 0; i < m; i++) {
			if (o[i] == 1 && a[x-1][y] != 2) {
				x--;
				if (a[x][y] == 1) result++;
			}
			else if (o[i] == 2 && a[x-1][y-1]!= 2) {
				x--; y--;
				if (a[x][y] == 1) result++;
			}
			else if (o[i] == 3 && a[x-1][y+1]!=2) {
				x--;  y++;
				if (a[x][y] == 1) result++;
			}
		}

		cout << "#" << k << " " << result << endl;
	}

	
	return 0;
}