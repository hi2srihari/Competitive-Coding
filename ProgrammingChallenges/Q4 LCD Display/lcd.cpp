#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
//GOT IT!!!!
//code that prints numbers in 7 segment display form...
//supports variable sizes...(1-10)
//each digit occupies s+3 columns and 2s+3 rows where s is the size
//NOTE that we are printing from left to right and once a line is printed we can't
//go back to the same line....so we need a level control variable that controls the levels
//there are 5 "levels"
//1 and 4 have no level 1
//5 and 6 no level two(right half)
//eg printing 12345 in s=1 would be
//
//    -  -
//  |  |  | | |
//    -  -   -
//  ||    |   |
//    -  -
int printLevel(int s,char n[],int level)
{
    cout<<endl;
//print one level of all no.s followed by the next level and so on...
int buf=0,dep=0;//goes uto last digit and then becomes zero again;
    switch(level)
    {

    case 1:

        while(buf<strlen(n))
        {
            if(n[buf]=='1'||n[buf]=='4')//1 and 4 have no 1st level
           {
            for(int I=0;I<(s+2);I++)
                {

                    cout<<" ";//print spaces s+2 times
           }

           }
        if(n[buf]=='2'||n[buf]=='3'||n[buf]=='5'||n[buf]=='6'||n[buf]=='7'||n[buf]=='8'||n[buf]=='9'||n[buf]=='0')//all have level 1
        {
            cout<<" ";//one space before hyphen(for | character)
            for(int I=0;I<(s);I++)
                cout<<"-";//print minus s+3 times
            cout<<"  ";//2 spaces separate digits
        }
        buf++;

        }printLevel(s,n,level+1);//call itself for printing next level


        break;
        //now there are more possibilites,no.s with right level 2 only(1,2,3,7),left only (5,6)and both(4,8,9,0)
    case 2://level 2

        while(dep<s)
        {
            buf=0;
            while(buf<strlen(n))
            {
            if(n[buf]=='5'||n[buf]=='6')//LEFT ONLY
            {
                cout<<"|";
                for(int i=0;i<s+1;i++)
                    cout<<" ";//PRINT LEFT | AND THEN PRINT SPACES TILL END OF DIGIT (S+1) TIMES
            }
            if(n[buf]=='4'||n[buf]=='8'||n[buf]=='9'||n[buf]=='0')
            {
                cout<<"|";//LEFT |
                for(int i=0;i<s;i++)
                    cout<<" ";//PRINT | AND PLACE CURSOR AT RIGHT | POSITION(S SPACES AHEAD)
                cout<<"|";//RIGHT |
            }
            if(n[buf]=='1'||n[buf]=='2'||n[buf]=='3'||n[buf]=='7')
            {
               for(int i=0;i<s+1;i++)
                    cout<<" ";//PLACE CURSOR AT RIGHT | POSITION(S+1 SPACES AHEAD)
                    cout<<"|";
            }
            cout<<" ";//SPACE SEPARATING DIGITS,9S AND 5S
            buf++;
            }
        if(dep<s-1)
        cout<<endl;//OTHERWISE ONE EXTA ENDL
        dep++;
        }
        printLevel(s,n,level+1);
        break;
    case 3:
//2,3,4,5,6,8,9 HAVE LEVEL THREE...1,7,0 DON'T
while(buf<strlen(n))
        {
            if(n[buf]=='1'||n[buf]=='7'||n[buf]=='0')//1,7,0 have no 3rd level
           {
            for(int I=0;I<(s+2);I++)
                {

                    cout<<" ";//print spaces s+2 times
           }

           }
        if(n[buf]=='2'||n[buf]=='3'||n[buf]=='4'||n[buf]=='5'||n[buf]=='6'||n[buf]=='8'||n[buf]=='9')//all have level 1
        {
            cout<<" ";//one space before hyphen(for | character)
            for(int I=0;I<(s);I++)
                cout<<"-";//print minus s+3 times
            cout<<"  ";//2 spaces separate digits
        }
        buf++;

        }printLevel(s,n,level+1);//call itself for printing next level


        break;
    case 4:
        //4th level
        //again left & right possibilities
        //ONLY LEFT:2
        //ONLY RIGHT:1,3,4,5,7,9
        //BOTH:6,8,0
        while(dep<s)
        {
            buf=0;
            while(buf<strlen(n))
            {
            if(n[buf]=='2')//LEFT ONLY
            {
                cout<<"|";
                for(int i=0;i<s+1;i++)
                    cout<<" ";//PRINT LEFT | AND THEN PRINT SPACES TILL END OF DIGIT (S+1) TIMES
            }
            if(n[buf]=='6'||n[buf]=='8'||n[buf]=='0')//BOTH
            {
                cout<<"|";//LEFT |
                for(int i=0;i<s;i++)
                    cout<<" ";//PRINT | AND PLACE CURSOR AT RIGHT | POSITION(S SPACES AHEAD)
                cout<<"|";//RIGHT |
            }
            if(n[buf]=='1'||n[buf]=='3'||n[buf]=='4'||n[buf]=='5'||n[buf]=='7'||n[buf]=='9')//ONLY RIGHT
            {
               for(int i=0;i<s+1;i++)
                    cout<<" ";//PLACE CURSOR AT RIGHT | POSITION(S+1 SPACES AHEAD)
                    cout<<"|";
            }
            cout<<" ";
            buf++;
            }
        if(dep<s-1)
        cout<<endl;//OTHERWISE ONE EXTA ENDL
        dep++;
        }
        printLevel(s,n,level+1);
        break;
    case 5:
//2,3,5,6,8,9,0 HAVE LEVEL FIVE...1,4,7 DON'T
while(buf<strlen(n))
        {
            if(n[buf]=='1'||n[buf]=='4'||n[buf]=='7')//1,7,0 have no 5TH level
           {
            for(int I=0;I<(s+2);I++)
                {

                    cout<<" ";//print spaces s+2 times
           }

           }
        if(n[buf]=='2'||n[buf]=='3'||n[buf]=='5'||n[buf]=='6'||n[buf]=='8'||n[buf]=='9'||n[buf]=='0')//all have level 1
        {
            cout<<" ";//one space before hyphen(for | character)
            for(int I=0;I<(s);I++)
                cout<<"-";//print minus s+3 times
            cout<<"  ";//2 spaces separate digits
        }
        buf++;

        }printLevel(s,n,level+1);//call itself for printing next level


        break;




    }
    if(level==5)
    return 43;
}
main()
{

    int s;
    char n[10]="";
while(1)
{
    cout<<endl;
    cin>>s>>n;//size followed by the no to be printed;
    cout<<endl;
    if(s==0&&n==0)
        exit(10);
        printLevel(s,n,1);
}
}
