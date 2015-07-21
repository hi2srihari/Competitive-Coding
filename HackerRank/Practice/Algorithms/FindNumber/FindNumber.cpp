#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int T=0;
    int power=10,digit=0;
    long int N=0,tempp=0;
    long int countDivisors=0;
    cin>>T;
    for(int i=0; i<T; i++) {
        countDivisors=0;
        cin>>N;
        tempp=N;

        while(N>0) {
            digit=N%power;
            //cout<<"\ndigit is "<<digit;
            //cout<<endl<<digit<< "divides ?"<<tempp[i];
            if(digit==0) {
                N=N/10;
                continue;
            }
            if(tempp%digit==0) {
                // cout<<endl<<digit<< "divides ?"<<tempp[i];
                countDivisors++;
            }
            N=N/10;
        }
        cout<<countDivisors<<endl;
    }

    return 0;
}
