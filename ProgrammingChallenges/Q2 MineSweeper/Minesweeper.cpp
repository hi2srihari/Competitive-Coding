#include<iostream>
using namespace std;
//the purpose of this code is to convert a graphical matrix of mines into
//minesweeper boxes that show the no. of adjacent mines,safe spots are represented by dots(.)
//and mines by stars (*)
main()
{

    int x=0,mineSum=0,m[10],n[10];m[0]=1;n[0]=1;
    char a[100][100][10],b[100][100][10],buffer;
    while(m[x]!=0&&n[x]!=0)
    {
        cout<<"Enter Field No "<<x+1<<endl;
    cin>>m[x]>>n[x];

    cout<<"Grid has "<<m[x]<<" rows and "<<n[x]<<" columns"<<endl;

        for(int j=0;j<m[x];j++)
        {
            cout<<"Enter "<<j+1<<"th row...\n";
            for(int k=0;k<n[x];k++)
            {
                cin>>a[j][k][x];
            }

        }
        x++;//increment field no for every legitimate field entered...


    }
    for(int y=0;y<x;y++)
    {

        for(int j=0;j<m[y];j++)
        {
            for(int k=0;k<n[y];k++)
            {
              mineSum=0;
                if(a[j][k][y]==42)
                {   cout<<"is this the real life? or is it jus fanta sea?\n";
                    b[j][k][y]=42;

                }
                //now we needta iterate thru all eight positions...
                //there's definitely a better way than  6IFs
                if(a[j-1][k-1][y]=='*')
                    mineSum++;
                if(a[j-1][k][y]=='*')
                    mineSum++;
                if(a[j-1][k+1][y]=='*')
                    mineSum++;
                if(a[j][k-1][y]=='*')
                    mineSum++;
                if(a[j][k+1][y]=='*')
                    mineSum++;
                if(a[j+1][k-1][y]=='*')
                    mineSum++;
                if(a[j+1][k][y]=='*')
                    mineSum++;
                if(a[j+1][k+1][y]=='*')
                    mineSum++;
                b[j][k][y]=mineSum;

            }
        }
    cout<<"Field #"<<y+1<<endl;
    for(int p=0;p<m[y];p++)
    {
        for(int q=0;q<n[y];q++)
        {
            if((char)(b[p][q][y])!='*')
            buffer=(char)(b[p][q][y]+48);
            else
                {
                 cout<<"is this even happening???\n";
                 buffer=42;
                 cout<<"NOW BUFFER IS... "<<buffer;
                }


            cout<<buffer<<"  ";
        }
        cout<<endl;
    }
    }
}
//PROBLEM 1:THE STARS ARE'NT SHOWING AS STARS,INSTEAD THEY APPEAR AS ZEROES...
//<in homer's voice>:STUPID STARS!...
