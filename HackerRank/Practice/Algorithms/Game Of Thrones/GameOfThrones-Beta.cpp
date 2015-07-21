#include<iostream>
#include<stdio.h>

using namespace std;
main()
{
    freopen("GameIn.txt","r",stdin);
    int countLetter[26]={};
    char stringg[100000]={};
    int sum=0;
    cin>>stringg;
    for(int i=0;stringg[i]!='\0';i++)
    {
        countLetter[stringg[i]-97]=(countLetter[stringg[i]-97]+1)%2;
    }
    for(int i=0;i<26;i++)
    {
    sum+=countLetter[i];
    if(sum>1)
    {
    cout<<"\nNO";
    return 0;
    }
    }
    if(sum<2)
    cout<<"\nYES";
}
