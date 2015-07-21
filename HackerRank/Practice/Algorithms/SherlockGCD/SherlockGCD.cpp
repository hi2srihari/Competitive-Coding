#include<iostream>
#include<stdio.h>
using namespace std;
int gcd(int a,int b)
{
    int c=0,i=2;
    if(a>b) {
        c=a;
        a=b;
        b=c;
    }
    if(a==1)
        return 1;
    for(; i<=(a/2)+1; i++) {
        if(a%i==0&&b%i==0) {
            return i;
        }
    }

        return 1;
}

int main()
{
    freopen("SherlockGCDIn3.txt","r",stdin);
    //freopen("GCDOut.txt","w",stdout);
    int T=0;
    cin>>T;
    while(T>0) {
        int N=0;
        long A[100000]= {};
        int found=0;
        cin>>N;
        for(int i=0; i<N; i++) {
            cin>>A[i];
        }
        for(int i=0; i<N-1; i++) {
                if(found==1)
                {
                    break;
                }
            for(int j=i+1; j<N; j++) {
                if(gcd(A[i],A[j])==1) {
                    found=1;
                    cout<<"YES";
                    if(i<N-1)/*to prevent extra endl,which should'nt be printed if j==N-1,since that's the last line*/
                        cout<<endl;
                    break;
                }

            }
            if(found==1)
                {
                    break;
                }
        }
        if(found==0) {
            cout<<"NO";
            if(T>1)
                cout<<endl;
        }
        T--;
    }
    return 0;
}
