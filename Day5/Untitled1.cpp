#include <iostream>
#define N 101
using namespace std;

int m, n, a[N][N], s[N][N];

int inline getMax(int a, int b, int c) {
	int tmp = a < b ? b : a;
	return tmp < c ? c : tmp;
}

int main() {
	

	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}

		s[i][0] = a[i][0];
	}

	for (int i = 1; i < n; i++) {
		s[0][i] = s[0][i-1] < s[1][i - 1] ? s[1][i - 1] + a[0][i] : s[0][i - 1] + a[0][i];
		for (int j = 1; j < m - 1; j++) {
			s[j][i] = getMax(s[j][i - 1], s[j - 1][i - 1], s[j + 1][i - 1]) + a[j][i]; 
		}
		s[m - 1][i] = s[m - 2][i - 1] < s[m - 1][i - 1] ? s[m - 1][i - 1] + a[m - 1][i] : s[m - 2][i - 1] + a[m - 1][i];
	}

	int result = -99999999;
	for (int i = 0; i < m; i++) {
		result = result < s[i][n - 1] ? s[i][n - 1] : result;
	}

	cout << result;
	return 0;
}
