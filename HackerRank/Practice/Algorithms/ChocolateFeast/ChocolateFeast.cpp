#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
    /*freopen("ChocolateFeastinput04.txt","r",stdin);
    freopen("ChocolateOut1.txt","w",stdout);*/
    long long N=0,C=0,M=0;
    int T=0;
    cin>>T;
    while(T>0)
    {
        long long chocs=0;
        cin>>N>>C>>M;
        chocs=floor(N/C);
        int w=floor(chocs/M);
        int r=chocs%M;
        while(w>0)
        {
            chocs=chocs+w;
            w=floor((w+r)/M);
            r=((w+r)%M);
        }
        cout<<chocs;
        if(T>1)
            cout<<endl;
        T--;
    }
    return 0;
}
