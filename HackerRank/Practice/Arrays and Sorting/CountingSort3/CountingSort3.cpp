#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stdio.h>
using namespace std;
int main()
{
    freopen("Counting3.txt","r",stdin);
    unsigned long long n=0,x=0,a[100]= {},sum=0;
    char str[1000]="";
    cin>>n;
    for(int i=0;i<n; i++) {
        cin>>x;
        cin>>str;
        a[x]++;
       // cout<<a[x]<<endl;
    }
    for(int i=0;i<100;i++)
    {
        sum=sum+a[i];
        a[i]=sum;
        cout<<a[i]<<" ";
    }
    return 0;
}
