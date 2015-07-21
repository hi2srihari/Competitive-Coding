#include <cmath>
#include <cstdio>
#include <iostream>
//WE SIMPLY CANNOT STORE ALL THE DIGITS,MAYBE WE'LL STORE SOME 5 DIGITS,AND ADD AND TAKE MODS
using namespace std;

long long powerCycle(long long int num)
{
    int p=log10(num);//calcu power
    long long countt=0;
    int stop=0;
    long long tempp=num;
    int lastTwo=num;
    while(num>0) {
        num=num*tempp;
        num=num%1000;
        if(num%10>0) {
            countt++;
        }
       // cin>>stop;
        if(num%10==0)
            return 0;//must be 10
        if(num%((long long)pow(10,1+p))==lastTwo)
            return countt;
    }
}
int main()
{
    cout<<"\n89="<<powerCycle(89);
    int T=0;
    cin>>T;
    while(T>0) {
        long long N=0,K=0,sum=0;
        cin>>K>>N;
        for(long long i=1; i<=K; i++) {
            long cycle=powerCycle(i);
            if(cycle==0)
                continue;//since last two digits are zero and don't matter
            long long n=pow(i,N%cycle);
            cout<<"\nN is "<<n;
            sum=sum+n;
            sum=sum%1000;
        }
        //cout<<"\nsum is "<<sum;
        long long power=(long long)(log10(sum));
        if(power==0) {
            cout<<0<<sum<<endl;
        }
        //^^ special case of zero padding
        else {

            cout<<sum%100<<endl;
        }
        T--;
    }
    return 0;
}
