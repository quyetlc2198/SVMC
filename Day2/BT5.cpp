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
    int m,n,k;
    freopen("BT5.txt","r",stdin);
    cin>>m>>n>>k;
    int A[100][100] = {0};
    int B[100];
    int C[100];
    // hàng
    for(int i = 0; i < m;i++){
        cin>>B[i];
    }
    // cột
    for(int i = 1 ; i <= n;i++){
        cin>>C[i];
    }
    for(int i =0; i < k;i++){
            int a,b;
            cin>>a>>b;
            A[a-1][b] = 100;
    }
    for(int i = 0; i < m;i++){
        for(int j = 1; j <=n; j++){
            if(A[i][j] != 0){
                if(A[i][j] > min(B[i],C[j])){
                    if(B[i] > C[j]){
                        A[m][j] = C[j];
                        for(int a = 0; a < m;a++){
                            if(A[a][j] > C[j]){
                                A[a][j] = C[j];
                            }
                        }
                    }else{
                        A[i][0] = B[i];
                        for(int a = 1; a <=n;a++){
                            if(A[i][a] > B[i]){
                                A[i][a] = B[i];
                            }
                        }
                    }
                }
            }
        }
    }
    int t = 0;
    for(int i = 0; i <m; i++){
        t+=A[i][0];
    }
    for(int i = 1 ; i <=n;i++){
        t+=A[m][i];
    }
    for(int i =0; i <= m; i++){
        for(int j =0; j <=n; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<t;
    
}