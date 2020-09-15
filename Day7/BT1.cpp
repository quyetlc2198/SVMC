#include<iostream>
#include<stack>
#include<string>
using namespace std;

stack <char> S; 

int main(){
    freopen("BT1.txt","r",stdin);
    int n;
    cin>>n;
    string A,B;
    int a = 0;
    while(a <= n){        
        getline(cin,A);     
        // duyet 
        for(int i = 0; i <= A.size() ; i++){
            if(A[i] == '(' || A[i] == ')'){
                continue;
            }
            if(A[i] == '+' || A[i] == '-'){

                S.push(A[i]);
            }else{
                if(A[i] == '*' || A[i] == '/'){
                    if(S.empty() || S.top() == '*' || S.top() == '/'){
                        S.push(A[i]);
                    }else{
                        while(S.top() == '+' || S.top() == '-'){
                            B = B + S.top();
                            S.pop();
                        }
                    }
                }else{
                    B = B + A[i];
                }
            }  
        }
        a++;
    }
}