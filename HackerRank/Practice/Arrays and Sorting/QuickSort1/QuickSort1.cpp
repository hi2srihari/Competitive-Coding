#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stdio.h>
using namespace std;
int main()
{
    freopen("QuickSort1.txt","r",stdin);
    int n,x[1000]= {};
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>x[i];
    }
    int p=x[0],i=0;
    for(int j=1; j<n; j++) {
        i=j;
        if(x[j]<p) {
            while(i>0) {
                x[i]=x[i-1];
                i--;
            }
            x[i]=x[j];
            x[0]=x[j];
        }

        for(int i=0; i<n; i++)
                cout<<x[i]<<" ";
            cout<<endl;
    }
    for(int i=0; i<n; i++)
        cout<<x[i]<<" ";
}
