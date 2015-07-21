#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int smallest(int a[],int n)/* fn to find smallest number in an array*/
{
    int small=10000;//unrealistically huge value
    for(int i=0; i<n; i++) {
        if(a[i]>0) {
            if(a[i]<small) {
                small=a[i];
            }
        }

    }

    return small;
}

int main()
{

    int N=0;
    cin>>N;
    int noRemaining=N;//temp variable to store no. of remaining sticks,after every cut
    int vanished=0;//cut completely
    int a[1000]= {0}; //array of stick lengths
    for(int i=0; i<N; i++) {
        cin>>a[i];
    }
    while(noRemaining>0) {
        int countt=0;//count of elements greater than the smallest no.
        int small=smallest(a,N);
        if(small==10000)
            break;
        for(int i=0; i<N; i++) {
            if(a[i]>=small) {
                countt++;//cut successfully
                a[i]=a[i]-small;//cut by the smallest length
            }

        }
        cout<<countt<<endl;
        noRemaining--;

    }

    return 0;
}
