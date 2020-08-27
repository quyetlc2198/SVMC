#include<iostream>
using namespace std;

int A[32][32];

int Y(int n){
    for(int i = 0 ;i < n; i++){
        for(int j = 0; j < (int) n/2; j++){
            if(A[i][j] != A[i][n-1-j]){
                return 0;
            }
        }
    } 
    return 1;       
}


int X(int n){
    for(int i = 0; i < (int) n/2;i++){
        for(int j = 0; j < n; j++){
            if(A[i][j] != A[n-1-i][j]){
                return 0;
            }
        }
    } 
    return 1;       
}

int main(){
    freopen("4.txt","r",stdin);
    int N;
    cin>>N;
    int a = 0;
    int B[100];
    
    while (a < N)
    {
        int n;
        cin>>n;
        char c;
        for(int i = 0; i < n;i++){
            for(int j = 0; j < n; j++){
                cin>>c;
                A[i][j] = (int)c;
            }
        }
        B[a] = X(n) && Y(n);
        a++;
    }
    
    for(int i = 0; i < N;i++){
        if(B[i] == 1){
            cout<<"#"<<i+1<<" YES\n";
        }else{
            cout<<"#"<<i+1<<" NO\n";
        }
    }
}