#include<iostream>
using namespace std;

int main(){
    // freopen("BT6.txt", "r" , stdin);
    int n, p;
    cin>>n;
    int A[2][100];
    int B[100];
    for(int i = 0; i < n; i++){
        cin>>A[0][i];
    }
    cin>>p;
    for(int j =0; j < p; j++){
        cin>>A[1][j];
    }
    int i =0, j=0,t=0;
    while(j != p){
        if(A[0][i] > A[1][j]){
            j++;
        }else{
            if(A[0][i] == A[1][j]){
                j++;
                i++;
            }else{                                
                B[t] = A[0][i];
                i++;
                t++;
            }
        }
    }  
    while(i != n){
        B[t] = A[0][i];
        i++;
        t++;
    }

    for(int a = 0; a < t  ; a++){
        cout<<B[a]<<" ";
    }
    
}