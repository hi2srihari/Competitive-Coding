#include<iostream>
using namespace std;
main()
{
    int i,j;
    while(1)
    {
        cout<<endl;
        cin>>i>>j;
        long int x,y,counter[200]={0},n=0;
        x=y=i;
        for(;y<=j; )
        {
            if(x==1)
            {
                x=y++;
                n++;
            }
            else{
                if(x%2==0)
                {
                    x=x/2;
                }
                else{
                    x=(3*x)+1;
                }
                counter[n]++;
            }
        }int big=counter[0];
        for(int I=0;I<n;I++)
        {
            if(counter[I]>big)
                big=counter[I];
        }
        cout<<endl<<i<<"  "<<j<<"  "<<big+1;
    }

}
////FINALLY THIS ONE WORKS .....
////ZUCKONIT!!
