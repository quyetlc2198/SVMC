#include<iostream>
using namespace std;

int main(){
    freopen("BT1.txt", "r", stdin);
    int n;
    cin>>n;
    int A[100][100] = {0};
    int B[100] = {0};
    for(int i =0; i < n; i++){
        cin>>A[i][0];
        int t;
        cin>>t;
        for(int j = 1; j <= t; j ++){
            cin>>A[i][j];
        }
    }
    int t = 0;
    for(int i =0 ; i < n; i++){
        for(int j = 1; j < 100 && A[i][j] != 0; j++){
            int point =0;
            for(int q = 0; q < n; q ++){
                if(A[i][j] == A[q][0]){
                    point = 1;
                    break;
                }
            }
            if (point == 0)
            {   
                B[t] = A[i][j];
                t=t+1;
            }else{
                continue;
            }
        }
    }
    for(int i =1; i < t; i++){
        for(int j = 0; j < i;j++){
            if(B[i] == B[j]){
                B[i] = 0;
            }
        }

    }
    int result = 0;
    for(int i = 0; i < t; i++){
        if(B[i] != 0){
            result++;
        }
    }
    cout<<result;
}