#include <iostream>
#include <chrono>
#define N 101
using namespace std;



int main() {
	freopen("BT4.txt","r",stdin);
	int K, n, m, sum, a[N][N];
	cin >> K;

	for (int k = 1; k <= K; k++) {
		cin >> n >> m >> sum;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
			}
		}

		int x, y, bestDelta = 9999999;
		for (int i = 0; i < n-m; i++) {
			for (int j = 0; j < n - m; j++) {
				int s=0;
				for (int i1 = i; i1 < i+m; i1++) {
					for (int i2 = j; i2 < j + m; i2++) {
						s += a[i1][i2];
					}
				}
				int delta = s < sum ? sum - s : s - sum;
				if (delta < bestDelta) {
					bestDelta = delta;
					x = i;
					y = j;
				}
			}
		}

		cout << "#" << k << " " << x << " " << y << endl;
	}

	
	return 0;
}