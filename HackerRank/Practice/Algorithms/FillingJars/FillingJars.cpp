#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
   // freopen("FillingJarsIn.txt","r",stdin);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long N=0,M=0,a=0,b=0,k=0,avg=0;
    cin>>N>>M;
    while(M>0)
    {
    cin>>a>>b>>k;
    avg=avg+((b-a+1)*k);
    M--;
    }
    avg=avg/N;
    cout<<avg;

    return 0;
}
