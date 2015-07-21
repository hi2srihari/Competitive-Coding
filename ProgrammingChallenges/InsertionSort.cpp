/*program to perform merge sort an array of 10 integers*/
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
main()
{
    int a[10]={3,2,8,5,10,6,9,1,7,4},key=0,i=0;
    cout<<"\nbefore sorting\n";
    for(int z=0;z<10;z++)
        cout<<a[z]<<" ";
for(int j=1;j<10;j++)
{
    key=a[j];
    i=j-1;
    while(a[i]<key&&i>=0)//the < or > decides whether in nondecreasing or nonincreasing orders
    {
        a[i+1]=a[i];
        i--;
    }
    a[i+1]=key;
}
cout<<"\nafter sorting\n";
for(int i=0;i<10;i++)
        cout<<a[i]<<" ";
}
