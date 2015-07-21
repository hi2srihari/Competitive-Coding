#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    freopen("AngryChildren2.txt","r",stdin);
    int N=0,K=0;
    cin>>N>>K;
    long long candy[100000]={};
    for(int i=0;i<N;i++)
    {
        cin>>candy[i];
    }
    int sortedCandy[100000]={};
    int insertt=0;
    int index=0;
    for(int I=0;I<N;I++)
    {
        index=I;
        for(int J=0;J<N;J++)
        {
            if(candy[J]<candy[index])
               {
                index=J;
               }
        }
       // cout<<candy[index]<<"  ";
        sortedCandy[insertt]=candy[index];
        candy[index]=NULL;//out of range
        insertt++;
    }
    long long diff=0,minn=100000000000;
    for(int i=0;i<N-K+1;i++)
    {
        //cout<<sortedCandy[i]<<" ";
        diff=sortedCandy[i+K-1]-sortedCandy[i];
        if(minn>diff)
        {
            minn=diff;
        }
    }
    cout<<minn;
    return 0;
}
