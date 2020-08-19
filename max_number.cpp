#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen("input.txt","r",stdin);
        int n;
        cin>>n;
        int i;
        int A[10];
        for(i =0; n/10 > 0; i++){
            A[i] = n%10;
            n =n/10;
        }
        A[i++] = n;
        for(int j =i-1; j >=0;j--){
            if(A[j] % 2 == 0){
                swap(A[i-1], A[j]);
                break;
            }
        }
        sort(A,A+i-1,greater<int>());

        for(int j = 0; j < i; j++){
            cout<<A[j];
        }
    
}