#include<iostream>
using namespace std;
main()
{
   int n,A[100]={},B[100]={},C[101]={};
   cout<<"\nenter no of bits to add\n";
   cin>>n;
   cout<<"\nenter first no\n";
   for(int i=0;i<n;i++)
   {
       cin>>A[i];
   }
   cout<<"\nenter second no\n";
   for(int i=0;i<n;i++)
   {
       cin>>B[i];
   }
   for(int i=n-1;i>=0;i--)//since addition happens from right to left
   {
        if(C[i+1])//ie carry exists
        {
            if(A[i]&&B[i])//sum is 1 carry is 1
            {
                C[i+1]=1;
                C[i]=1;
            }
            else
            {
                if(A[i]||B[i])//0 1 or 1 0
                {
                    //sum is 0 carry is 1
                    C[i+1]=0;
                    C[i]=1;
                }
                else//0 and 0
                {
                    C[i+1]=1;
                }
            }
        }
        else
        {
            //no carry
            if(A[i]&&B[i])//sum is 0 carry 1
            {
                C[i+1]=0;
                C[i]=1;
            }
            else{
                C[i+1]=A[i]+B[i];//simple addition 10 01 or 00,no carry
            }
        }
   }
   cout<<endl;
   for(int p=0;p<=n;p++)
   {
       cout<<C[p];
   }
}
