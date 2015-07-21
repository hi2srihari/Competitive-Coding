#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
    freopen("Manasainput06.txt","r",stdin);
    freopen("ManasaOut.txt","w",stdout);
    int T=0;
    cin>>T;
    while(T>0)
    {

        int a=0,b=0,n=0,c=0;
        cin>>n>>a>>b;
       /* int stop=0;
        cout<<endl<<n<<" "<<a<<" "<<b;
        cin>>stop;*/
        n--;
        int d=fabs(b-a);
            if(a>b)
            {
                c=a;
                a=b;
                b=c;
            }
            if(a==b)
            {
                cout<<n*a<<endl;
            }
            else{
        for(int i=(n*a);i<=(n*b);i=i+d)
        {
            cout<<i;
            if(i==n*b)
            cout<<endl;
            else
            cout<<" ";
        }
            }
        T--;
    }
    return 0;
}
