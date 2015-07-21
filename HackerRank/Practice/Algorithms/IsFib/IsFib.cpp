#include<iostream>
#include<stdio.h>
using namespace std;
main()
{
    freopen("IsFibIn.txt","r",stdin);
    int T=0;
    cin>>T;
    while(T>0)
    {

        long long a=0,b=1,c=0,N=0;
        cin>>N;
        while(a<=N)
        {
           // cout<<"\nA is"<<a;
            if(a==N)
            {
                cout<<"IsFibo\n";
                break;
            }
            else
            {
                c=a;
                a=b;
                b=b+c;
            }
        }
        if(a>N)
        {
            cout<<"IsNotFibo\n";
        }
        T--;
    }
}
