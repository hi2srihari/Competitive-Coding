#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   long T=0;
   long X[10000]={};
long i;//SUDDEN CLARITY!!i stands for iteration!!!!
   long childrenServed[10000]={};
    cin>>T;
    while(T>0)
        {
        long countt=1;
        for(int i=0;i<T;i++)
            cin>>X[i];
        while(X>0)
            {
            i=countt-1;
            X[i]=X[i]-pow(countt,2);
            if(X[i]>=0)
                childrenServed[i]++;
            else
                break;
            countt++;
        }
        T--;
    }
    for(int i=0;i<T;i++)
        cout<<childrenServed[i]<<endl;
        cout<<"yo";
    return 0;
}
