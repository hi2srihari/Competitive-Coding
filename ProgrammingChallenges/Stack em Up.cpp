#include<iostream>
#include<stdio.h>
using namespace std;
int shuffleNo[100]={},cards[52]={};

//DONE!!! LIKE A BOSS!!!
struct shuffles
{
    int from[10]={},to[10]={};//IN THE GIVEN EG,1: FROM[0]=1,TO[0]=2,FROM[1]=51,TO[1]=52
                        //THE CARDS IN THESE PLACES ARE SWAPPED

}s[10];//HOLDS THE SHUFFLING PATTERNS
//52 CARDS AND SHUFFLING PROCESSES ARE GIVEN
int shuffle(int n)//PERFORMS SHUFFLE NO N
{
    int temp=0;
    for(int i=0;i<10;i++)
        cout<<s[n].to[i]<<" ";
    cout<<"\n\nN is "<<n<<"\n";

    for(int i=0;i<10&&s[n].to[i]!=0;i++)
    {
    temp=cards[s[n].from[i]-1];
    cards[s[n].from[i]-1]=cards[s[n].to[i]-1];
    cards[s[n].to[i]-1]=temp;
    cout<<cards[s[n].to[i]-1]<<" and "<<cards[s[n].from[i]-1]<<endl;
    for(int i=0;i<52;i++)
        cout<<cards[i]<<endl;
        cout<<endl<<endl;

       /* for(int j=0;j<52;j++)
        {


            if(s[n].to[i]==cards[j])
            {
                cout<<endl<<" I AND J "<<i<<" "<<j<<endl;
                //PROBLEM STARTS HERE
                //TILL FIRST SHUFFLE IT'S FINE...BUT AFTER THAT WE NEEDTA SWAP POSITIONS NOT VALUES
                cards[j]=s[n].from[i];
                cards[s[n].from[i]-1]=s[n].to[i];
                cout<<cards[j]<<" and "<<cards[s[n].from[i]-1]<<" are swapped\n";
                s[n].from[i]=s[n].to[i]=0;//SWAPPING DONE
                 for(int i=0;i<52;i++)
        cout<<cards[i]<<endl;
            }
        }*/
    }

}
main()
{
freopen("Stack em Up.txt","r",stdin);
int T,noOfShuffles=0,shuffleOrder[10][52]={},l,timesShuffled=0;//shuffleOrder holds the cards in shuffled form

for(int i=0;i<52;i++)
    cards[i]=i+1;//INITIAL CONDITION OF ALL CARDS
cin>>T;
while(T)
{
    cin>>noOfShuffles;
    for(int i=0;i<noOfShuffles;i++)
    {
    l=0;//IN EACH SHUFFLE
    for(int j=0;j<52;j++)
    {
        cin>>shuffleOrder[i][j];//GET EACH CARD IN EACH SHUFFLE
        if(shuffleOrder[i][j]!=j+1)//ie IF a SWAP HAD OCCURRED
        {

        //SEARCH FOR IT'S PLACE
        for(int k=0;k<52;k++)
        {
if(k==j)//k can't be equal to j
    continue;
            if(shuffleOrder[i][k]==j+1)
            {

                s[i].from[l]=j+1;
                s[i].to[l]=k+1;
                l++;//COUNTS THE NO OF CARDS SWAPPED IN A SINGLE SHUFFLE
            }
        }

        }
    }
    }
    //NOW GET SHUFFLE NUMBER
    cout<<endl;
    for(int i=0;i<noOfShuffles;i++)
    {
        cin>>shuffleNo[i];//TO DETECT WHAT SHUFFLE HAS BEEN APPLIED
        timesShuffled++;
    }
    //KEEP SWAPPING CARDS BASED ON SHUFFLES
    for(int a=0;a<timesShuffled;a++)
    {
        //PERFORM SHUFFLE NO a
        //HAVE A FUNCTION
        shuffle(shuffleNo[a]-1);//-1 because shuffles are numbered as natural no.s in input but here we have them stored in array locations

    }
    cout<<endl;
    for(int i=0;i<52;i++)
        cout<<cards[i]<<endl;
    /*for(int i=0;i<noOfShuffles;i++)
    {
        for(int j=0;j<52;j++)
            cout<<shuffleOrder[i][j]<<" ";
        cout<<endl;
    }*/

    T--;

}
}
