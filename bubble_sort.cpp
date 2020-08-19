#include<iostream>
using namespace std;

int main(){
    int a=10 ;
    int A[] = {10,9,8,7,6,5,4,3,2,1};

    for(int i =0; i < a; i++){
        for(int j = i+1; j < a; j++){
            if(A[i] > A[j]){
                int t = A[i];
                A[i] = A[j];
                A[j] = t;
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        cout<<A[i]<<" ";
    }
    
}