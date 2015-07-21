#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stdio.h>
using namespace std;
int main()
{
    freopen("Counting2.txt","r",stdin);
    unsigned long long n=0,x=0,a[100]= {};
    cin>>n;
    for(int i=0;i<n; i++) {
        cin>>x;
        a[x]++;
       // cout<<a[x]<<endl;
    }
    for(int i=0; i<100; i++) {
            while(a[i]>0)
        {cout<<i<<" ";
        a[i]--;
        }
    }
    return 0;
}
