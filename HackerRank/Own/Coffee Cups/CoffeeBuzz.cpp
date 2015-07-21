#include<iostream>
using namespace std;
int maxCoffee(int n,int t,int b)
{
    int coffee=0,sum=0,buzz=0;
    cout<<endl;
    while(sum<n&&sum>=0) {
        buzz=(b*coffee);
        if(buzz>=t) {
            sum=sum+1;//minimum time is 1 minute
            if(sum>n)
                break;
            coffee++;
            cout<<"after trip "<<coffee<<" time elapsed is "<<sum<<endl;
        } else {
            sum=sum+(2*t);
            t=t-buzz;
            if(sum>n)
                break;
            coffee++;
            cout<<"after trip "<<coffee<<" time elapsed is "<<sum<<endl;
        }
    }
    return coffee;
}

main()
{
    int N,B,T;
    cin>>N>>T>>B;
    if(B<T&&T<N)
        cout<<maxCoffee(N,T,B);
    else
        cout<<"\nError!!";
}
