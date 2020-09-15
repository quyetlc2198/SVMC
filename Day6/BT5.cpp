#include <iostream>
#define N 101
using namespace std;

int main() {
	
	int m, n, s[N], q[N];
	cin >> m;
	for (int i=0; i<m; i++){
		cin >> s[i];
	}
	
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> q[i];
		if (i > m-1) break;
		else if (s[i] == q[i]) cout << (i+1) << " ";
	}
	return 0;
}