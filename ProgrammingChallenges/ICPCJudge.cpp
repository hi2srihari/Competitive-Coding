#include <iostream>
#include <stdlib.h>
#include<stdio.h>

using namespace std;
struct contestant
{
    int no,qAttempted=0,totPenalty=0;
    int noOfAttempts[100]={};//no of attempts for each question
}cont[100];


int main()
{
    for(int x=0;x<100;x=x+1)
    {
        cont[x].no=x+1;//intitialize contestant no.s
    }
int T=0;
freopen("ICPCJudgeIn","r",stdin);
int maxInputs=0;
int contestantNo[100]={},qNo[100]={},timeElapsed[100]={};
char code[100]="",blank;
cin>>T;//test cases
cout<<T;
while(T)
{

//input the lines(contestant no,q no, time, code)
    for(int i=0;cin>>contestantNo[i]>>qNo[i]>>timeElapsed[i];i++)
    {
        maxInputs=i;//max inputs used to keep track of no of inputs
    }
    //now process each line
    for(int j=0;j<maxInputs;j++)
    {
        if(code[j]=='R'||code[j]=='U'||code[j]=='E')
        {
            continue;//ignore these codes
        }
        else
        {
            if(code[j]=='I')
            {
                cont[contestantNo[j]].noOfAttempts[qNo[j]]++;
            }
            if(code[j]=='C')
            {
                cont[contestantNo[j]].qAttempted++;//if correct increase no of questions attempted successfully
                cont[contestantNo[j]].totPenalty=cont[contestantNo[j]].totPenalty+timeElapsed[j]+cont[j].noOfAttempts[qNo[j]]*20;
                cout<<endl<<cont[j].no<<" "<<cont[j].qAttempted<<cont[j].totPenalty;
            }
        }

    }
T--;
}



}


