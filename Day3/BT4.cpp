#include<iostream>
using namespace std;

int T, a[15][15],b1[15],b2[15],b[15];

int main() {
	freopen("BT4.txt", "r", stdin);//r = read
	cin >> T;

	for (int t = 1; t <= T; t++) {
		for (int i = 1; i <= 9; i++) {
			for (int j = 1; j <= 9; j++) {
				char c; cin >> c;
				if (c == '.') a[i][j] = -1;
				else a[i][j] = (int)c - 48;
			}
		}
		int cnt = 1;
		//check hang, cot.
		for (int i = 1; i <= 9; i++) {
			for (int j = 1; j <= 9; j++) {
				if (a[i][j] != -1) {
					for (int x = 1; x <= 9; x++) {
						if (x != i && a[i][j] == a[x][j]) cnt = 0;
						if (x != j && a[i][j] == a[i][x]) cnt = 0;
						if (cnt == 0) break;
					}
				}
			}
		}
		//check ô 3*3
		if (cnt == 1) {
			for (int i = 1; i < 15; i++) {
				b[i] = 0;
				b1[i] = 0;
				b2[i] = 0;
			}
			for (int i = 1 ; i <= 3 ; i++) {
				for (int j = 1; j <= 3; j++) {
					if (a[i][j] > 0) {
						if (b[a[i][j]] == 1) cnt = 0;
						else b[a[i][j]] = 1;
					}
				}
				for (int j = 4; j <= 6; j++) {
					if (a[i][j] > 0) {
						if (b1[a[i][j]] == 1) cnt = 0;
						else b1[a[i][j]] = 1;
					}
				}
				for (int j = 7; j <= 9; j++) {
					if (a[i][j] > 0) {
						if (b2[a[i][j]] == 1) cnt = 0;
						else b2[a[i][j]] = 1;
					}
				}
			}

			for (int i = 1; i < 15; i++) {
				b[i] = 0;
				b1[i] = 0;
				b2[i] = 0;
			}
			for (int i = 4; i <= 6; i++) {
				for (int j = 1; j <= 3; j++) {
					if (a[i][j] > 0) {
						if (b[a[i][j]] == 1) cnt = 0;
						else b[a[i][j]] = 1;
					}
				}
				for (int j = 4; j <= 6; j++) {
					if (a[i][j] > 0) {
						if (b1[a[i][j]] == 1) cnt = 0;
						else b1[a[i][j]] = 1;
					}
				}
				for (int j = 7; j <= 9; j++) {
					if (a[i][j] > 0) {
						if (b2[a[i][j]] == 1) cnt = 0;
						else b2[a[i][j]] = 1;
					}
				}
			}
			
			for (int i = 1; i < 15; i++) {
				b[i] = 0;
				b1[i] = 0;
				b2[i] = 0;
			}
			for (int i = 7; i <= 9; i++) {
				for (int j = 1; j <= 3; j++) {
					if (a[i][j] > 0) {
						if (b[a[i][j]] == 1) cnt = 0;
						else b[a[i][j]] = 1;
					}
				}
				for (int j = 4; j <= 6; j++) {
					if (a[i][j] > 0) {
						if (b1[a[i][j]] == 1) cnt = 0;
						else b1[a[i][j]] = 1;
					}
				}
				for (int j = 7; j <= 9; j++) {
					if (a[i][j] > 0) {
						if (b2[a[i][j]] == 1) cnt = 0;
						else b2[a[i][j]] = 1;
					}
				}
			}
		
		}

		cout << "#" << t << " " << cnt << endl;;
	}
}