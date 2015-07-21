#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int palindromify(char a[][10000],int n,int x)//a is array,n is max length
    {


        n--;
        int s=0,diff=0;
for(int i=0;i<=n/2;i++)
{
    if(a[x][i]!=a[x][n-i])//if not equal
    {

       diff=fabs((int)(a[x][n-i]-a[x][i]));
       s=s+diff;
       a[x][n-i]=a[x][i];//make them equal


    }
    else
    {
      continue;

    }

}
return s;
}

int main() {
    freopen("PalindromIn.txt","r",stdin);
    int T=0;
    cin>>T;
    char a[10][10000]={};
    int steps[10]={};//no of steps
    for(int x=0;x<T;x++)
        {
        cin>>a[x];
        int len=0;

        for(int i=0;a[x][i]!='\0';i++)//loop to estimate max length of a string
            {
            len=i+1;

        }

        steps[x]=palindromify(a,len,x);
    }
    for(int x=0;x<T;x++)
        {
    cout<<steps[x]<<endl;
    }
    return 0;
}
