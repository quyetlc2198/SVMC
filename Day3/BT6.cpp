#include<iostream>
using namespace std;
int A[50000];
int S[50000];

int solution(int a , int b){
    S[a] = A[a];
    int result = S[a];
    for(int i = a+1; i <= b;i++){
        if(S[i-1] > 0){
            S[i] += S[i-1] + A[i];
        }else{
            S[i] = A[i];
        }
        if(result < S[i]){
            result = S[i];
        }
    }
    return result;
}

int main(){
    freopen("BT6.txt","r", stdin);
    int n;
    cin>>n;
    
    for(int i = 1; i <=n; i++){
        cin>>A[i];
    }
    int m;
    cin>>m;
    int B[50000];
    for(int i =0; i < m; i++){
        int x,y;
        cin>>x>>y;
        B[i] = solution(x,y);
    }
    for(int i = 0; i < m; i++){
        cout<<B[i]<<"\n";
    }
}