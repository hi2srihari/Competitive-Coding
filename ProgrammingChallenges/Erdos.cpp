#include<iostream>
#include<stdio.h>
using namespace std;

main()
{
char blankLine,code[100]="";//to get blank lines
int T=0,contestantNo[100]={},questionNo[100]={},timeElapsed[100]={};
//input format
//contestantno  questionno  time  code
cin>>T;
while(T)
{
for(int i=0;cin>>contestantNo[i]>>questionNo[i]>>timeElapsed[i]>>code[i];)
{
   i++;
}

    T--;
}
}
