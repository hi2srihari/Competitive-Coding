#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
   /* freopen("HalloweenPartyIn.txt","r",stdin);
    freopen("HalloweenPartyOut.txt","w",stdout);*/
    int T=0;
    cin>>T;
    while(T>0)
    {
        long long K=0;
        cin>>K;
        if(K%2==0)
            cout<<(K/2)*(K/2);
        else
        {
            cout<<(K/2)*((K/2)+1);
        }
        if(T>1)
            cout<<endl;
        T--;
    }
    return 0;
}
