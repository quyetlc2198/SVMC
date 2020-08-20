#include<iostream>
using namespace std;

int main(){
    int n;
    freopen("BT5.txt", "r", stdin);
    while(true){
        cin>>n;
        cout<<n<<"\n";
        fflush(stdout);
        if(n == 42)break;
    }
}