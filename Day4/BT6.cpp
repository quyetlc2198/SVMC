#include<iostream>
using namespace std;
string s,u;

int check(int a){
    for(int i  = 0; i < u.length();i++){
        if(s[i+a] != u[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    freopen("BT6.txt","r",stdin);
    
    cin>>s>>u;
    int t= 0 ;
    for(int i = 0; i <= s.length()-u.length();i++){
        t+= check(i);
    }
    cout<<t;
}