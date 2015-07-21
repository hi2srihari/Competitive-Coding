#include<iostream>
using namespace std;
//HERE WE DECRYPT A FILE FROM ITS ENCODED FORM
struct occur
{
    int occur[10]={};//THIS ARRAY MUST BE CHECKED FOR EQUALITY
};
main()
{
    cout<<"wooooo\n";
    cout<<"wooooo\n";

int N,x=0,y=0;
occur possibleOccurrence[26][100]={},dictOccurrence[26][100]={};//POSSIBLE OCCURRENCE HOLDS THE POSITIONS
                                                                // WHERE A PARTICULAR ALPHABET IS ENCOUNTERED
char dict[100][16]={},words[100][16]={};//N<100
for(int i=0;i<N;i++)
{
    cout<<endl;
    cin>>dict[i];//RECEIVE iTH LETTER IN DICTIONARY(IN ALPHABETICAL ORDER
}
for(int i=0;i<100||words[i]=="\n";i++)//KEEP GETTIN IN UNTIL ENTER IS PRESSED OR 100 WORS LIMIT REACHES
{
    cin>>words[i];
}
//NOW THE MAGIC BEGINS!
//first get the occurence array for the dictionary words
for(int i=0;i<N;i++)
{
    for(int j=0;j<16&&dict[j]!=" ";j++)
    {
        //for every letter,check every other letter in the dictionary
        //if equal put the position(s) in occurence array,and replace letter with #(to prevent counting again)
        //4 nested FORs YIKES
        //#INDHIYATHOLAIKAATCHIGALILMUDHALMURAIAAGA!!
        for(int k=i;k<N;k++)
        {
            for(int l=j+1;l<15&&dict[l]!=" ";l++)
            {
                if(dict[i][j]==dict[k][l])
                {
                    dictOccurrence[x][i].occur[y];//need a variable that controls which letter's occurence is being calculated
                    y++;//y iterates thru occurrence array
                    dict[k][l]='#';//to prevent from counting again
                }
            }
        }
        x++;//goto next letter in alphabet
        y=0;
    }
}
cout<<"wooooo\n";
}
