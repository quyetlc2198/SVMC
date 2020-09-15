#include<iostream>
using namespace std;
#include<queue>
int main(){
    queue <int> S;
    int T;
    freopen("BT1.txt","r",stdin);
    scanf("%d",&T);
    int a,b;
    while(T != 0){      
        scanf("%d",&a);
        if (a == 1)
        {
            scanf("%d",&b);
            S.push(b);
        }
        if(a == 2){
            if(!S.empty()){
                S.pop();
            }
           
        }
        if(a == 3){
            if(S.empty()){
                
                printf("Empty!\n");
            }else{              
                printf("%d\n",S.front());
                S.pop();
            }
        }
        T--;
    }
}