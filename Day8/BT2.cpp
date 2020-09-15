#include<iostream>
using namespace std;

int main(){
    freopen("BT2.txt","r",stdin);
    int a,b;
    cin>>a>>b;
    char A[a][b] ;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            A[i][j] = '0';
        }
    }
    for(int i = 0; i < 3; i++){
        int k;
        cin>>k;
        while(k!= 0){
            int x,y;
            cin>>x>>y;
            if(i == 0){
                A[x-1][y-1] = 'Q';
            }
            if(i == 1){
                A[x-1][y-1] = 'K';
            }
            if(i == 2){
                A[x-1][y-1] = 'P';
            }
            k--;
        }
    }
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }
    int S = 0;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            if(A[i][j] == 'Q'){
                
            }
        }
        
    }
}