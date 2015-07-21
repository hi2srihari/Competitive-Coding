#include<iostream>
using namespace std;
main()
{
int a[10]={10,7,5,1,2,9,8,3,4,6},small=0,temp=0;//array to be sorted
cout<<"\nBEFORE SORTING...\n";
for(int j=0;j<10;j++)
{
    cout<<a[j]<<" ";
}
for(int i=0;i<9;i++)//needs to run only n-1 times
{
    small=i;
    for(int j=i+1;j<10;j++)
    {
        if(a[small]>a[j])
        {
           //swap small and a[j]
           temp=a[small];
           a[small]=a[j];
           a[j]=temp;
        }

    }
    a[i]=a[small];//put the Ith smallest element in position i
}
cout<<"\nAFTER SORTING...\n";
for(int j=0;j<10;j++)
{
    cout<<a[j]<<" ";
}
}
/*NOTE TO SELF
INSTEAD OF TYPING OUT 3 LINES FOR SWAPPING,WE CAN COMPROMISE ON SPACE AND DECREASE TIME BY
CREATING A NEW ARRAY B AND STORING THE RESULTS IN ARRAY B...*/
