#include<iostream>
#include<math.h>
using namespace std;
/*to print sequence 5 25 30 125 130 150 155...*/
main()
{
    int no=0,a=0,res=0,counter=0,c=0;
    cin>>no;
    while(no) {
        a=no%2;
        counter++;
        c=(a*pow(5,counter));
        res = res + c;
        cout<<"pow(5,counter) "<<pow(5,counter)<<endl;
        no=no>>1;
    }
    cout<<endl<<res;
}
