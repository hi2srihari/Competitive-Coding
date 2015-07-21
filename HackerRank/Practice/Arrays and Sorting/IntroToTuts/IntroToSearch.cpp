#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n,e,a[1000]={};
    cin>>e>>n;
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
        if(a[i]==e)
            {
            cout<<i;
        }
    }
}
