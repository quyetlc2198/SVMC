#include<iostream>
using namespace std;

int F(int i, int j, string t){
    if(i > j){
        return 0;
    }
    if(i == j){
        return 1;
    }
    if(i == j-1){
        if(t[i] == t[j] ){
            return 3;
        }else
        {
            return 2;
        }
        
    }else{
        if(t[i] == t[j]){
            return F(i+1,j,t) + F(i,j-1,t) - F(i+1,j-1,t) +1;
        }
        return F(i+1,j,t) + F(i,j-1,t) - F(i+1,j-1,t);
    }
}

int main(){
    freopen("BT3.txt","r",stdin);
    int n;
    cin>>n;
    int B[10];
    int z = 0;
    while (z < n)
    {              
        string t;
        cin>>t;  
        int j = t.length() - 1;
        int i = 0;
        B[z] = F(i,j,t);
        z++;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<B[i]<<" ";
    }
    

}