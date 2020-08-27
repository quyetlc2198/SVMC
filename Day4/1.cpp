#include<iostream>
using namespace std;

int main(){
    freopen("BT1.txt","r",stdin);
    int N;
    cin>>N;
    
    int a = 0;
    int A[100];
    while (a < N)
    {
        int n;
        cin>>n;
        int t = 0 ,b;
        for(int i = 0; i < n; i++){
            cin>>b;
            t+=b;
        }
        A[a] = t;
        a++;
    }
    for(int i =0; i < N; i++){
        cout<<A[i]<<"\n";
    }
    
}
