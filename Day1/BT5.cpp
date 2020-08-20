#include<iostream>
using namespace std;


int main(){
    freopen("BT5.txt", "r", stdin);
    int A[100];
    int i = 0;
    while (true)
    {
        cin>>A[i];
        if(A[i] == 42){
            break;
        }
        i++;
    }
    for (int j = 0; j <= i; j++)
    {
        cout<<A[j]<<"\n";
    }
    
    
}