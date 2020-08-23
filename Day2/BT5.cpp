#include<iostream>
using namespace std;

int main(){
    int m,n,k;
    freopen("BT5.txt","r",stdin);
    cin>>m>>n>>k;
    int A[100][100];
    int B[100];
    int C[100];
    for(int i = 0; i < m;i++){
        cin>>B[i];
    }
    for(int i = 0; i < n;i++){
        cin>>C[i];
    }
    for(int i =0; i < k;i++){
            int a,b;
            cin>>a>>b;
            A[a-1][b-1] = 1;
    }
    for(int i =0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }
}