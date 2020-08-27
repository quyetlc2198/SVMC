#include<iostream>
using namespace std;
int A[100];
int n,h;

int sum(int a){
    int s = 0;
    for(int i = int(a-h/3) ; i <= int(a+h/3);i++){
        s+=A[i];
    }
    return s;
}

int main(){
    freopen("BT5.txt","r",stdin); 
    cin>>n;
    cin>>h;  
    for(int i = 0; i < n ;i++){
        cin>>A[i];
    }
    int max = 0;
    int s = 0;
    for(int i = (int) h/3 ; i < int(n-h/3);i++){
        s = sum(i);
        if(max < s){
            max = s;
        }
    }
    cout<<max;
}