#include<iostream>
using namespace std;

int main(){
    int N;
    freopen("BT6.txt","r",stdin);
    cin>>N;
    int a,b,c,d;
    int A[100][100] = {0};
    int g = 0 ;
    for(int k = 0; k < N; k++){
        cin>>a>>b>>c>>d;
        for(int i = a ; i < c ; i++){
            for(int j = b; j < d  ; j++){
                if(A[i][j] == 0){
                    A[i][j] = 1;
                    g++;
                }
            }
        }
    }
    cout<<g;
}