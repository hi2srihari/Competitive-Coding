#include<iostream>
#include<math.h>
using namespace std;
main()
{
    int arr[100]= {},x,n,result[100]= {},sum=0; //array containing no.s
    //IDEA:WE START FROM FIRST ELEMENT OF ARRAY AND SUBTRACT SUCCESSIVE TERMS AND STORE THEM IN ANOTHER ARRAY
    //THEN WE CHECK THE RESULT ARRAY TO DETERMINE WHETHER IT IS JOLLY OR NOT
    while(1)
    {
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];//GET INPUT
        }
        //NOW TEST FOR JOLLYNESS
        for(int i=0; i<n-1; i++)
        {
            result[i]=fabs(arr[i]-arr[i+1]);
            sum+=result[i];
        }
        //NOW CHECK THE RESULT ARRAY IF IT HAS ALL THE NUMBERS FROM 1 TO N-1,we can use SUM OF N TERMS FORMULA
        if(sum==((n-1)*(n/2)))
            cout<<"\nJolly ";
        else
            cout<<"\nNot Jolly ";
    }
}
//ANOTHER VICTORY!
