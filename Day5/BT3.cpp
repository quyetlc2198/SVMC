#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    freopen("BT3.txt","r",stdin);
    int N;
    cin>>N;
    int a = 0;
    int s,m,n;
    int A[50] = {0};
    while(a < N){
        cin>>s>>m>>n;
        for(int i = 0; i < s; i++){
            cin>>A[i];
        }
        sort(A,A+s,greater<int>());
        int t = 0,S = 0,q = 0;
        while ((t < m || t < n) && q < s)
        {
            if(t >= m || t >= n){
                S += (t+1)*(A[q]);
                t=t+1;
                q=q+1;
            }else{
                S += (t+1)*(A[q]+A[q+1]);
                t=t+1;
                q=q+2;
            }
            
        }
        cout<<"#"<<a+1<<" "<<S<<"\n";
        a++;
    }
    
}