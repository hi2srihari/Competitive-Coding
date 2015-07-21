#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
//essentially we just need the sum of all the differences greater than average
//or sum of all differences less than average...(absolute value)
//they are both equal
main()
{



    int Trips=1;
    float amountSpent[1000],amountSum=0,average=0,Totalexchange=0,avediff[1000];
    cin>>Trips;//input no of students
    while(Trips!=0)
    {
        amountSum=0,average=0,Totalexchange=0;
        for(int I=0;I<Trips;I++)
        {
            cin>>amountSpent[I];//input amount spent by each student
            amountSum=amountSum+amountSpent[I];//calculating total amount
        }
        average=amountSum/Trips;//average calculation
        for(int J=0;J<Trips;J++)
        {
            if(amountSpent[J]>average)
            {
                Totalexchange=Totalexchange+(amountSpent[J]-average);
            }
        }
        cout<<"Amount to be exchanged is "<<Totalexchange<<endl;
        cin>>Trips;
    }
cout<<"BYE!\n";
}
////////////////////////////////////////////////////////
///////////WORKS REASONABLY WELL...KUDOS!!/////////////
/*....................................................*/

