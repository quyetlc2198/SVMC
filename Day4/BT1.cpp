#include<iostream>
using namespace std;

int main(){
    freopen("BT1.txt","r",stdin);
    int N;
    cin>>N;
    int a = 0;
    int A[100];
    int B[100];
    while (a < N)
    {
        int n;
        cin>>n;
        int t = 0;
        for(int i = 0; i < n; i++){
            cin>>B[i];
            t+=B[i];
        }
        A[a] = t;
        a++;
    }
    
    
}
