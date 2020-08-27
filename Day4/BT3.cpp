#include<iostream>
using namespace std;

int A[100][100];

int check(int a, int b, int g){
    int min = 1001;
    int x = a;
    int y = b;
    int t = A[a][b];
    for(int i = a-1; i < a+2;i++){
        for(int j = b-1; j < b+2; j++){
            if(A[i][j] > t && min > A[i][j]){
                min = A[i][j];              
                x = i;
                y = j;
            }
        }
    }
    if(min != 1001){
        g++;
        cout<<A[x][y]<<" ";
        check(x,y,g);
    }else{
        return g;
    }
}


int main(){
    freopen("BT3.txt","r",stdin);
    int n;
    cin>>n;
    int B[100];
    int N;
    int z = 0;
    while(z < n){
        cin>>N;
        int a,b;
        cin>>a>>b;
        for(int i = 0; i < N;i++){
            for(int j = 0; j < N; j++){
                cin>>A[i][j];
            }
        }
        B[z] = check(a,b,0);
        cout<<"\n";
        z++;
    }
    
    for(int i =0 ; i < n;i++){
        cout<<"#"<<i+1<<" "<<B[i]<<"\n";
    }
}