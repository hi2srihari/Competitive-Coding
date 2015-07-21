#include<iostream>
using namespace std;
int getNoOfFives(int x)
{
     long cases[100000]={};
    int c=0;
    for(int i=0;(i*5)<x;i++)
    {
        int diff5=x-(5*i);
        int diff3=x-(3*i);
if(diff5%3==0)
{
    cases[c]=diff5;
    c++;
    //cout<<"yoyoyoyo"<<c<<"\n";
}
if(diff3%5==0)
{
    cases[c]=x-diff3;
    c++;
}
    }
    if(c==0)
        {return -1;}
    else{
     long maxx=-1;
    for(int i=0;i<c;i++)
    {
        //cout<<"\n case"<<cases[i];
        if(maxx<cases[i])
        {
            maxx=cases[i];
           // cout<<"\nmaxx changed";
        }
    }
    return maxx;
    }
}
int main()
{
    int T=0;
    int threes[20]={},fives[20]={};
    unsigned long N[20]={};
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>N[i];
        fives[i]=getNoOfFives(N[i]);
        //threes[i]=N[i]-fives[i];
        //cout<<fives[i]<<endl;
        if(fives[i]==-1)
        {
            cout<<-1<<endl;
            continue;
        }
        for(int j=0;j<fives[i];j++)
        {
            cout<<5;
        }
        for(int j=0;j<(N[i]-fives[i]);j++)
        {
            cout<<3;
        }
        cout<<endl;
    }

return 0;

}
