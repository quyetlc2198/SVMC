#include<iostream>
using namespace std;
int A[100][100] = {1001};

int sum(int a, int b){
    int s = 0;
    for(int i = a-1; i < a+2;i++){
        for(int j = b-1; j < b+2;j++){
            if(A[i][j] != 1001){
                s = s+ A[i][j];
            }
        }
    }
    if(s < 0){
        return A[a][b];
    }else{
        return 0;
    }
}

int main(){
    freopen("BT3.txt", "r", stdin);
    int N;
    cin>>N;
    int m,n;
    int a = 0;
    int B[50];
    while (a < N)
    {
        cin>>m>>n;  
        for(int i =0; i < m;i++){
            for(int j = 0; j < n; j++){
                cin>>A[i][j];
            }
        }
        int s = 0;
        for(int i =0; i < m;i++){
            for(int j = 0; j < n; j++){
                s = s + sum(i,j);
            }
        }
        B[a] = s;
        for(int i =0; i < 100;i++){
            for(int j = 0; j < 100; j++){
                A[i][j] = 1001;
            }
        }
        a++;
    }
    for(int i = 0; i < N; i++){
    	if(B[i] < 0){
    		cout<<"#"<<i+1<<" "<<B[i]<<"\n";
		}else{
			cout<<"#"<<i+1<<" NOT FOUND\n";
		}
	}

}
