#include<iostream>


#define D 101
using namespace std;

int main() {
	int test, N;
	freopen("BT4.txt","r",stdin);
	cin >> test;
	for (int k = 1; k <= test; k++) {
		cin >> N;
		int g = 0, px, py, m[D][D];
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cin >> m[i][j];
				if (m[i][j] == 2) {
					px = i; py = j;
				}
			}
		}
		for (int i = px+1; i < N; i++) {
			if (m[i][py] == 0) g++;
			else break;
		}     
		for (int i = px-1; i >= 0; i--) {
			if (m[i][py] == 0) g++;
			else break;
		}       
		for (int i = py + 1; i < N; i++) {
			if (m[px][i] == 0) g++;
			else break;
		}
        
		for (int i = py - 1; i >= 0; i++) {
			if (m[px][i] == 0) g++;
			else break;
		}
        
		int i = px - 1, j = py - 1;
		while (i >= 0 && j >= 0) {
			if (m[i][j] == 0) {
				i--; j--;
				g++;
			}
			else {
				break;
			}
		}
        
		 i = px - 1, j = py + 1;
		while (i >= 0 && j < N) {
			if (m[i][j] == 0) {
				i--; j++;
				g++;
			}
			else {
				break;
			}
		}
        
		i = px + 1, j = py - 1;
		while (i < N && j >= 0) {
			if (m[i][j] == 0) {
				i++; j--;
				g++;
			}
			else {
				break;
			}
		}
       
		i = px + 1, j = py + 1;
		while (i < N && j < N) {
			if (m[i][j] == 0) {
				i++; j++;
				g++;
			}
			else {
				break;
			}
		}
        
		cout << "#" << k << " " << g << endl;
		
	}

	return 0;
}