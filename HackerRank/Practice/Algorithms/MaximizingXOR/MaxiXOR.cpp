#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    /*freopen("MaxiXORIn.txt","r",stdin);
    freopen("MaxiXOROut.txt","w",stdout);*/
    int L=0,R=0,A=0,B=0,big=0;
    cin>>L>>R;
    for(int i=L; i<=R; i++) {
        for(int j=L; j<=R; j++) {
            if(big<(i^j))
                big=i^j;
        }
    }
    cout<<big;
    return 0;
}
