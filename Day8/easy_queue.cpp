#include<stdio.h>

int main(){
    int A[100000];
    int front = -1;
    int back = -1;
    int T;
    freopen("BT1.txt","r",stdin);
    scanf("%d",&T);
    int a,b;
    while(T--){
        scanf("%d",&a);
        if(a == 1){
            scanf("%d",&b);
            back++;
            A[back] = b;       
            if(front == -1){
                front++;
            }
        }
        if(a == 2){
            if(front != -1 && front <=back){
                front++;
            }
            
        }
        if(a == 3){
            if(front >back){
                printf("Empty!\n");
            }else{
                printf("%d\n",A[front]);
                front++;
            }
        }
    }
    return 0;
}