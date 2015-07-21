#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    freopen("IsFibIn.txt","r",stdin);
    int T=0;
    cin>>T;
    while(T>0)
    {
        long double N=0;
        cin>>N;
        long double a=0,b=1,test=a+b,t=0;
        while(N-test!=0)
        {
            if((N-test)>0)
            {
            N=N-b;
            test=a;
            a=b;
            b=b+test;
            cout<<"\nb is "<<b;
        }

        else
        {
            t=1;
            cout<<"not fibon";
            break;

        }
    }
    if(t==0)
    cout<<"IS FIBON";
T--;
}
}
