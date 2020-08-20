#include<iostream>
using namespace std;

int main(){
    freopen("BT4.txt", "r", stdin);
    int n;
    cin>>n;
    int result[n];
    int i = 0;
    while (i < n)
    {
        int a;
        cin>>a;
        int A[a], B[a] = {0};
        for(int j = 0; j < a; j++){
            cin>>A[j];
        }
        B[0] = 0;
        for(int j = 1; j < a; j++){
            for(int q = 0; q < j ; q++){
                if(A[q] == A[j]){
                    B[j]= j;
                }
                
            }
        }
        int t = 0;
        result[i] = -1;
        while (t != a)
        {
            if(B[t] != 0){
                result[i] = A[t];
                break;
            }
            t++;
        }
        i++;
    }
    for(int i =0; i < n;i++){
        cout<<result[i]<<"\n";
    }
}