#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    freopen("BotPrincess.txt","r",stdin);
    int n=0,r=0,c=0;
    int bx=0,by=0,px=0,py=0;
     char grid[100][100]={};
    cin>>n;
    cin>>r>>c;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>grid[i][j];
            if(grid[i][j]=='p')
            {
                px=i;
                py=j;
                //cout<<"\nprincess at "<<px<<" "<<py<<endl;
            }
            if(grid[i][j]=='m')
            {
                bx=i;
                by=j;
                //cout<<"\nbot at "<<bx<<" "<<by<<endl;
            }
        }
    }
    while(bx!=px&&by!=py)
    {
        if(bx>px)
        {
        bx--;
        cout<<"LEFT";
        }
        if(bx<px)
        {
            bx++;
            cout<<"RIGHT";
        }
        if(by>py)
        {
            by--;
            cout<<"UP";
        }
        if(by<py)
        {
            by++;
            cout<<"DOWN";
        }
    }
return 0;
}
