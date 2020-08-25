#include<iostream>
using namespace std;

int sum(int a){
    return a*(a+1)*(a+2)/3 - a*(a+1)/2;
}

int main(){
    int a,b;
    cin>>a>>b;
    int result = sum(b) - sum(a-1);
    cout<<result;

}