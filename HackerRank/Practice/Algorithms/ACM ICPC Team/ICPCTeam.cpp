#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
/*
combos
1 0
2 1
3 3
4 (3+2+1)
5  10
basically nC2*/
int convertBoolToNum(bool a[],bool b[],int m)
{
    int compatibilityFactor=0;
for(int i=0;i<m;i++)
{
    if(a[i]||b[i])
        compatibilityFactor++;
}
return compatibilityFactor;
}
main()
{
    freopen("ICPCIn.txt","r",stdin);
    int N=0,M=0;/* N-No of participants,M-No of topics*/
    cin>>N>>M;
    bool participant[500][500];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cin>>participant[i][j];//each participant's values
        }
    }
    bool tempp=participant;
    int spec=0;//npt really interested in performance here ;p
    int maxx=0;
    int countmaxx=0;
    for(int i=0;i<N-1;i++)
    {
        for(int j=i+1;j<N;j++)//other participant
        {
    spec=convertBoolToNum(participant[i],participant[j],M);
    if(maxx<spec)
        {
            maxx=spec;
            countmaxx=1;
        }
        else
        {
            if(maxx==spec)
            {
                countmaxx++;
            }
        }
    }
    //findMax(spec,c);//fn to display max element and no of occurences of max element
}
cout<<maxx<<endl<<countmaxx;
}
