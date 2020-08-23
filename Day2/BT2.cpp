#include<iostream>
using namespace std;

int main(){
    int m,n;
    freopen("BT2.txt", "r", stdin);
    cin>>m>>n;
    int x = m;
    int y = n;
    int A[100][100];
    for(int i =0; i<m;i++){
		for(int j = 0; j<n;j++){
			A[i][j]= 0;
		}
	}
    int t = 0;
    int a = 0;
    while ( m!= 1)
    {
        for(int i = a; i < n ;i++){
            if(A[a][i] == 0){
                A[a][i] = t+1;
                
                t=t+1;
            }
        }
        for(int i = a; i < m;i++){
            if(A[i][n-1] == 0){
                A[i][n-1] = t+1;
                
                t=t+1;
            }
        }
        for(int i = n-1; i>=a ;i--){
            if(A[m-1][i] == 0 ){
                A[m-1][i] = t+1;
                t=t+1;
            }
        }
        for(int i = m-1; i >=a;i--){
            if(A[i][a] == 0){
                A[i][a] = t+1;
                
                t=t+1;
            }
        }
        n=n-1;
        m=m-1;
        a=a+1;
    }

    for(int i =0; i< x;i++){
		for(int j = 0; j<y ;j++){
			cout<<A[i][j]<<"  ";
		}
		cout<<"\n";
	}
    
}