#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int A[60000];
	int g = 0;
	for(int i =0; i < n; i++){
		cin>>A[i];
	}
	for(int i =0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(A[j] < A[i]){
				g++;
			}
		}
	}
	cout<<g;
}