#include<iostream>
#include<stdio.h>
using namespace std;
long long modulusCycle(long long n)
{
    if(n==0)
        return 0;
    else {
        long long countt=1;
        for(long long i=1; i<n; i=(10*i)+1) {
            if(countt==n) {
                return(i%n);/* return corresponding term in the modulo cycle*/
            }
            countt++;
        }
    }
}
int main()
{
    freopen("AkhilGFIn.txt","r",stdin);
    freopen("AkhilGFOut.txt","w",stdout);
    int T=0;
    cin>>T;
    while(T>0) {
        long long M=0,N=0,modd;
        cin>>N>>M;
        modd=modulusCycle(N%M);
        cout<<modd;
        if(T>1)
            cout<<endl;
        T--;
    }
    return 0;
}
