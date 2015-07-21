#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    freopen("GemStones.txt","r",stdin);
   int T;
   int occurrenceTable[26][100]={0};/*stores the occurences of each letter in each string*/
   int length[100]={0};/*max length of each string*/
   char elementComp[100][100];/*a 2d char array for input*/
   char x;//chumma,temporary variable
   int noOfGems=0;//final output
   cin>>T;
    for(int i=0;i<T;i++)
        {
        cin>>elementComp[i];//get input as a string for each test case(ie rock)
        for(int j=0;j<100&&elementComp[i][j]!='\0';j++)
            {
            x=elementComp[i][j];
            int letter=x-97;
            occurrenceTable[letter][i]++;//updates values for letterTH letter in iTH test case

        if(elementComp[i][j+1]=='\0')
            length[i]=j+1;//estimating max length
        }
    }
    //input over now process...
    for(int i=0;i<26;i++)//iterate thru eac letter
        {
        for(int j=0;j<T;j++)//in every test case
            {
            if(occurrenceTable[i][j]>0)
                {
                if(j==T-1)
                   {noOfGems++;//update no of gems}
                continue;//if j!=T-1 continue





        }
    }
            else
                {
                break;//letter not present in a word
            }
        }
    }
    cout<<noOfGems;
    return 0;
}
