#include<iostream>
using namespace std;

int main(){
    int n;
    int A[50][50];
    int B[50];
    int T[50];
    int C[50];
    freopen("BT3.txt","r",stdin);
    cin>>n;
    int max_point = 0;
    for(int i = 0; i < n; i++){
        C[i] = 1;
        T[i] = 0;
        for(int j = 0; j < n; j++){
            cin>>A[i][j];
            B[i] +=A[i][j];
            if(i != j){
                if(A[i][j] > 1){
                    T[i]++;
                }else{
                    T[i]--;
                }
            }
            if(i != j && A[i][j] == 0){
                C[i] = 0;
            }
        }
        if(max_point <= B[i]){
            max_point = B[i];
        }
    }
    for(int i =0; i < n;i++){
        if(B[i] == max_point){
            cout<<i+1<<" ";
        }
    }
    cout<<"\n";
    for(int i = 0; i < n;i++){
        if(T[i] > 0){
            cout<<i+1<<" ";
        }
    }
    cout<<"\n";
    for(int i = 0; i < n;i++){
        if(C[i] != 0){
            cout<<i+1<<" ";
        }
    }

}