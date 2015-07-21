#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{

    int countLetter[26]={};
    char stringg[100000]={};
    int countOdd=0;
    cin>>stringg;
    for(int i=0;stringg[i]!='\0';i++)
    {
        countLetter[stringg[i]-97]++;
    }
    for(int i=0;i<26;i++)
    {
    if(countLetter[i]%2!=0)
    countOdd++;
    }
    if(countOdd>1)
        cout<<"\nNO";
    else
        cout<<"\nYES";
return 0;
}
