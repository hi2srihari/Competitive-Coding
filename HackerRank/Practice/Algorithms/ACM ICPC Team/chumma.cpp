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
long int convertBoolToNum(int a[],int b[],int m)
{
  long int compatibilityFactor=0;
for(int i=0;i<m;i++)
{
    if(a[i]||b[i])
        compatibilityFactor++;
}
return compatibilityFactor;
}
int main()
{
    char chr,blank;
    freopen("ICPCIn.txt","r",stdin);
    int N=0,M=0;/* N-No of participants,M-No of topics*/
    cin>>N>>M;
    blank=getchar();
    unsigned long x=0;
    int participant[500][500]={};
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            chr=getchar();
            if(chr=='\n')
            {
                j--;
                continue;
            }
            participant[i][j]=((int)chr)-48;
           // cout<<"\nchr is"<<chr<<"value"<<participant[i][j];
        }
        //blank=getchar();//to skip the \n
    }

  /* for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cout<<participant[i][j];
        }
        cout<<endl;
    }*/
    long spec=0;
    long maxx=0;
    long countmaxx=0;
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
    return 0;
}
