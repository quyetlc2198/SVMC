#include <iostream>

using namespace std;

int a[101][101];

int main() {
    freopen("input.txt","r",stdin);
	for (int t = 1; t <= 10; t++) {
		int n;
        cin >> n;
        // input data
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
			}
		}
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			int i = 0, m = 99;
			while (a[i][j] != 1) i++;
			while (a[m][j] != 2) m--;
			int temp = 1;
			i++;
			while (i <= m) {
				if (a[i][j] == 2 && temp == 1) {
					cnt++;
					temp = 2;
				}
				else if (a[i][j] == 1) {
					temp = 1;
				}
				i++;
			}
		}
		cout << "#" << t << " " << cnt << endl;
	}
	return 0;
}
