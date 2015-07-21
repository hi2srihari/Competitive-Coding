#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<cmath>
using namespace std;
main()
{
long long n=0,smallDiff=INT_MAX;
cin>>n;
long long a[n],diff[n],k=0;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
sort(a,a+n);
for(int i=0;i<n-1;i++)
{
    if(fabs(a[i+1]-a[i])<smallDiff)
    {
        k=0;
        smallDiff=fabs(a[i+1]-a[i]);
        diff[k]=a[i];
        diff=a[i++];
    }
    else
        if(fabs(a[i]-a[i-1])==smallDiff)
    {
            diff[k]=a[i];
        diff[++k]=a[i++];
    }
}
for(int x=0;x<k;x++)
{
    cout<<diff[x];
    if(x<k-1)
        cout<<" ";
}
}
