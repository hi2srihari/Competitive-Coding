#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//10^16 is a VERY VERY LAAAARGE ONE!!!
int main() {
   int T=0;
     long double X;
   int i;
   cin>>T;
   while(T>0)
   {
       i=1;
       cin>>X;
       while(X>0)
       {
           X=X-(i*i);
           if(X>=0)
           {i++;}

       }
       cout<<i-1<<endl;
       T--;
   }
    return 0;
}
