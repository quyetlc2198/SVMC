#include<iostream>
#include<string.h>
using namespace std;


int main(){
   freopen("BT1.txt","r",stdin);
    int n;
    char str[200];
    cin>>n;
    while(n != 0){
    	cin.get(str,200);
        cout<<str<<endl;
	}
//    while(true){
//        cin>>n;
//        if(n == 0) break;
//        
//        // char A[20][100];
//        // int a = 0;
//        // for(int i = 0; i < n; i++){
//        //     for(int j = 0; j < (int) str.size()/n; j++){
//        //         A[i][j] = str[j+i];
//        //     }
//        // }
//        // for(int i = 0; i < n; i++){
//        //     for(int j = 0; j < (int) str.size()/n; j++){
//        //         cout<<A[i][j]<<" ";
//        //     }
//        //     cout<<"\n";
//        // }
//    }
}
