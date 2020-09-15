#include<iostream>
using namespace std;

int m,n;
int A[100][100], x[100];
int max_S = 0, s = 0;

void Try(int k){
    for(int v = -1; v < 2 ; v++){
        if(x[k-1] + v >= 0 && x[k-1] + v < m){
            x[k] = x[k-1]+v;
            s=s+A[x[k]][k];
            if(k == n-1){
                if(max_S < s){
                    max_S = s;
                }
            }else{
                Try(k+1); 
            }
            s=s-A[x[k]][k]; 
        }
        
    }
}

int main(){
    freopen("BT1.txt","r",stdin);
    
    cin>>m>>n;
    
    
    for(int i = 0; i < m; i++){
        for(int j = 0 ; j < n; j++){
            cin>>A[i][j];
        }
    }
    for(int i = 0; i < m;i++){
        x[0] = i;
        s=A[i][0];
        Try(1);
    }
    cout<<max_S;
    
}