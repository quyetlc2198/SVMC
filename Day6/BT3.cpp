#include<iostream>
using namespace std;

int main(){
    freopen("BT3.txt","r",stdin);
    int K;
    cin>>K;
    int n,m, a[100][100],B[100]; 
    for (int k = 1; k <= K; k++) {
		cin >> n >> m;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> a[i][j];
			}
		}
		int min = 99999999;
		int result = 0;
		for (int i = 0; i < m; i++) {
			int x = 0, y = i, s = 0;
			while (x < n) {
				if (a[x][y] == 0) {
					x++;
					s += 1;
				}
				else if (a[x][y] == 1) {
					if (y == 0) {
						x++;
						s += 1;
					}
					else {
						x++;
						y--;
						s += 2;
					}
				}
				else if (a[x][y] == 2) {
					if (y == m - 1) {
						x++; 
						s += 1;
					}
					else {
						x++;
						y++;
						s += 2;
					}
				}
				else {
					x++;
					s += 3;
				}
			}

			if (s <= min) {
				result = i;
				min = s;
			}
		}
// in ra van dong vien co so thu tu cao nhat
		cout << "#" << k << " " << result + 1 << endl;
	}

}