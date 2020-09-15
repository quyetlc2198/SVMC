#include<iostream>
#include<stdio.h>
#include<conio.h>
#include <stack>
using namespace std;
int main() {
	int t;
	int a, b;
	stack < int> q;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &a);
		if (a == 1) {
			scanf("%d", &b);
			q.push(b);
		}
		else if (a == 2) {
			if (!q.empty()) {
				q.pop();
			}
		}
		else if (a == 3) {
			if (!q.empty()) {
				printf("%d\n", q.top());
			}
			else printf("Empty!\n");
		}
	}
}
