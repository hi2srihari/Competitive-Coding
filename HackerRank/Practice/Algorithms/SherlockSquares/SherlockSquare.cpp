#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
    //freopen("SherlockSquareIn.txt","r",stdin);
    int T=0;
    cin>>T;
    while(T>0) {
        long double A=0,B=0,countt=0,i=0;
        cin>>A>>B;
        long double root=sqrt(A);
        if(floor(root)==root)
        {
            countt++;
        }
        i=floor(root)+1;
        while((i*i)<=B)
        {
            countt++;
            i++;
        }
        cout<<countt<<endl;
        T--;
    }
    return 0;
}
