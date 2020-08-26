#include <iostream>
using namespace std;

int calculate2(int a[],int st,int en)
{
    int b=a[st];
    int c=a[en];
    int h=b>c?c:b;
    int result=0;
    for(int i=en-1; i>st; i--)
    {
        result+=h-a[i];

    }
    return result;
}


int calculate1(int a[],int st,int en)
{
    int result=0;
    int first=a[en];
    int start=en;
    for(int i=en-1; i>=st; i--)
    {

        if(first<a[i])
        {

            result+=calculate2(a,i,start);
            first=a[i];
            start=i;

        }

    }

    return result;

}

int Calculate(int a[],int st, int en)
{
    int b=a[st];
    int c=a[en];
    int h=b>c?c:b;

    int result=0;
    for(int i=st+1; i<en; i++)
    {
        result+=h-a[i];
    }
    return result;
}
int main()
{
    bool ok=true;
    int T;
    freopen("BT1.txt","r",stdin);
    cin>>T;

    while(T--)
    {
        ok=true;
        int N;
        cin>>N;
        int blocks[10000];
        for(int i=0; i<N; i++)
        {
            cin>>blocks[i];
        }
        int water=0;
        int start=0;
        int ends=0;
        int highest=0;
        int first=blocks[start];
        for(int i=1; i<N; i++)
        {
            if(first<=blocks[i])
            {
                ends=i;

                highest=blocks[i]>first?first:blocks[i];
                water+=Calculate(blocks,start,ends);
                start=i;
                first=blocks[i];
                continue;
            }

        }
        if(start!=N-1)
        {
            ends=N-1;
            water+=calculate1(blocks,start,ends);
        }

        cout<<water<<endl;
    }
    return 0;
}