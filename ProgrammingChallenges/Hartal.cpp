#include<iostream>
using namespace std;
//PROGRAM TO CALCULATE NO OF WORKING DAYS LOST TO HARTALS
//
main()
{
int daysLost=0,T=0,P=0,N=0,h[100]={};
bool hartal=false;
cin>>T;//TEST CASES
while(T>0)
{
    cout<<endl;
    cin>>N;
    cin>>P;
    for(int i=0;i<P;i++)
    {
        cin>>h[i];//GETTING EACH HARTAL PARAMETER
    }

for(int i=1;i<=N;i++)
{
if((i+1)%7==0||i%7==0)//
{
    hartal=false;//NO HARTALS ON SATURDAY OR FRIDAY
}
else{
for(int j=0;j<P;j++)
{
    if((i)%h[j]==0)//IT DOESNT MATTER how many PARTIES DO HARTAL
    {
        hartal=true;
        cout<<endl<<"hartal on day "<<i<<"by party "<<j<<" with param "<<h[j];
    }
}
}
if(hartal==true)
    daysLost++;
    hartal=false;//RESET IT TO FALSE
}
cout<<endl<<daysLost;
}
}
//SUCCESS!!
//MY LIEGE !! WE HAVE QUELLED THE REBELLION !!
