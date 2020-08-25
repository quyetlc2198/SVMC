#include<iostream>
using namespace std;

int min(int a, int b){
	if(a < b){
		return a;
	}else{
		return b;
	}
}

int main(){
    int m,n;
	freopen("BT1.txt","r",stdin);
    cin>>m>>n;
    int A[100][100];
	int B[100][100];
	int C[100][100];
    for(int i =0; i < m; i++){
        for(int j =0; j < n; j++){
            cin>>A[i][j];
             if(A[i][j] == 0){
                 B[i][j] = 1;
             }else{
                 B[i][j] = 0;
             }
        }
    }
    int result = 0;
    for(int i =0; i < m;i++){
    	C[i][0] = A[i][0];
	}
	for(int j =0; j < n; j++){
		C[0][j] = A[0][j];
	}
	for(int i =1; i < m;i++){
		for(int j = 1; j < n;j++){
			if(A[i][j] == 0){
				C[i][j] = 0;
			}else{
				int t ;
				t = min(C[i-1][j],C[i-1][j-1]);
				t = min(t,C[i][j-1]);
				C[i][j] = 1+ t;
				if(C[i][j] > result){
					result = C[i][j];
				}
			}
		}
	}
	for(int i =0; i < m;i++){
    	C[i][0] = B[i][0];
	}
	for(int j =0; j < n; j++){
		C[0][j] = B[0][j];
	}
	for(int i =1; i < m;i++){
		for(int j = 1; j < n;j++){
			if(B[i][j] == 0){
				C[i][j] =0;
			}else{
				int t ;
				t = min(C[i-1][j],C[i-1][j-1]);
				t = min(t,C[i][j-1]);
				C[i][j] = 1+ t;
				if(C[i][j] > result){
					result = C[i][j];
				}
			}
		}
	}
	for(int i =0; i < m; i++){
		for(int j = 0 ; j < n; j++){
			cout<<C[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<result;
    
}
