#include<iostream>
#include<stdlib.h>
using namespace std;
int highest=0,highestPair=0,highestThree=0,setNumber=0,tie=0;
char setName[9][20]={"none","pair","2pairs","three","straight","flush","fullhouse","four","straightflush"};
bool onePair=0,twoPair=0,three=0,straight=0,flush=0,fullHouse=0,fourOfKind=0,straightFlush=0;
struct card
{
    char suit,value,rankC;
}black[5],white[5];
int High(card a[],int n)//N DENOTES
{
    //FINDS THE LARGEST IN A DECK OF 5
}
int rankHands(card a[5],int setNumber,int tie)//USED TO TEST FOR VARIOUS CONDITIONS AND RANK CARD,RETURNS A SET NAME AND TIEBREAKER
{
//FIRST CHECK FOR STRAIGHT FLUSH
char suit1=a[0].suit,suit2,suit3,suit4,suit5;
int smallest=a[0].rankC,largest=a[0].rankC;//5 different suit values for finding pairs and all
for(int i=0;i<5;i++)
{
if(a[i].suit==suit1)//if all are of same suit
{
    //now check if all no.s are consequent,we CAN USE SOME MATHEMATICAL PROPERTY
    //BUT HERE LARGEST-SMALLEST RANK=5 LA?
    for(int i=0;i<5;i++)
    {
    if(a[i].rankC<smallest)
        smallest=a[i].rankC;
    if(a[i].rankC>largest)
        largest=a[i].rankC;
    }
    if(largest-smallest==5)//STRAIGHT FLUSH
    {
        setNumber=8;
        tie=largest;
        return 0;
    }

}
}
//NOW FOUR OF A KIND
int same=0;
for(int i=0;i<5;i++)
{
    if(i==4)
{
    if(a[i].rankC==a[0].rankC)
        same++;
}
else{
if(a[i].rankC==a[i+1].rankC)
    same++;
}
}
//CHECK IF SAME==4
if(same==4)
{

}
}
main()
{

while(1)
{
    for(int i=0;i<5;i++)
    {
        cin>>black[i].value>>black[i].suit;
        //WE RANK THE CARDS AS VALUES HERE
        if(black[i].value>=50&&black[i].value<=57)
        {
            black[i].rankC=black[i].value-48;//CONVERT FROM ASCII TO NUMBER,here rank starts from 2 to 14
        }
        else{
                if(black[i].value=='T')
                black[i].rankC=10;
                if(black[i].value=='J')
                black[i].rankC=11;
                if(black[i].value=='Q')
                black[i].rankC=12;
                if(black[i].value=='K')
                black[i].rankC=13;
                if(black[i].value=='A')
                black[i].rankC=14;


        }

    }
    rankHands(black,setNumber,tie);
    for(int i=0;i<5;i++)
    {
        cin>>white[i].value>>white[i].suit;//GETTING INPUTS FOR BLACK AND WHITE
        //WE RANK THE CARDS AS VALUES HERE
        if(white[i].value>=50&&white[i].value<=57)
        {
            black[i].rankC=black[i].value-48;//CONVERT FROM ASCII TO NUMBER,here rank starts from 2 to 14
        }
        else{
                if(white[i].value=='T')
                white[i].rankC=10;
                if(white[i].value=='J')
                white[i].rankC=11;
                if(white[i].value=='Q')
                white[i].rankC=12;
                if(white[i].value=='K')
                white[i].rankC=13;
                if(white[i].value=='A')
                white[i].rankC=14;


        }
    }

}
}
