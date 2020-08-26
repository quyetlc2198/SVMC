#include<iostream>
#include<algorithm>
using namespace std;
int A[10000];

void sort(int A[], int n){
    for(int i =0; i < n; i++){
        for(int j = i+1; j < n;j++){
            if(A[i] >= A[j]){
                int t = A[i];
                A[i] = A[j];
                A[j] = t;
            }
        }
    }
}

int main(){
    freopen("BT1.txt","r", stdin);
    int N;
    cin>>N;
    int S[20];
    int a = 0;
    while (a < N)
    {
        int n;
        cin>>n;
        for(int i =0; i < n; i++){
            cin>>A[i];
        }
        sort(A,n);
        int t = 0;
        int b = A[n-2];
        for(int i =0; i<n-1;i++){
            t+= b - A[i];
        }
        S[a] = t;
        a++;
    }
    for(int i =0; i < N; i++){
        cout<<S[i]<<"\n";
    }
    
}