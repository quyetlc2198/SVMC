#include<iostream>
using namespace std;

int main(){
    // counting sort
    int A[] = {3,4,2,1,0,0,4,3,4,2};
    int C[5] = {0};
    int B[10] = {0};
    for(int i =0; i < 10; i++){
        for(int j = 0; j < 5; j++){
            if(A[i] == j){
                C[j]++;
            }
        }
    }
    for(int i = 1; i < 5;i++){
        C[i] = C[i-1]+C[i];
    }
    for(int i =0; i < 10;i++){
        int t = C[A[i]];
        B[t-1] = A[i];
        C[A[i]]--;
    }
    for(int i =0; i < 10; i++){
        cout<<B[i]<<" ";
    }
}