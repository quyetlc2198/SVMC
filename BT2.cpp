#include<iostream>
using namespace std;

int main(){
    // freopen("BT2.txt", "r", stdin);
    int n;
    cin>>n;
    int A[100] = {0};
    int B[100] = {0};
    for(int i =0; i < n; i++){
        cin>>A[i];
    }
    int result = 1;
    for(int i = 0; i < n; i++){
        B[i] = 1;
        for(int j = 0 ; j < i ;j++){
            if(A[j] < A[i]){
                B[i] = max(B[i],B[j]+1);
            }
            result = max(result, B[i]);
        }
    }
    cout<<result;
}