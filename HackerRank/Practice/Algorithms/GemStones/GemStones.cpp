#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*int elementsAboveZero(int a[100],int m)
{
    for(int i=0; i<m; i++) {

    }
}*/
int main()
{
    freopen("GemStones.txt","r",stdin);//input taken from file
    int T,ocurrence[26][100]= {0},length[100]= {0}; //length[] stores length of each string
    char elementComp[100][100],x;
    int noOfGems= 0;
    cin>>T;
    for(int i=0; i<T; i++) {
        cin>>elementComp[i];//each letter in each element
        for(int j=0; j<100&&elementComp[i][j]!='\0'; j++) {

                x=elementComp[i][j];
                ocurrence[(int)(x-97)][i]++;
                /*cout<<"\nocurrence table "<<x-97<<","<<i<<" value changed to "<<ocurrence[x-97][i];
                a stone is a gemstone if each row of occurence table has atleast value of 1*/
                if(elementComp[i][j+1]=='\0') {
                    length[i]=j+1;
                    // cout<<"\nlength of "<<i<<" string is "<<j+1;
                }



        }
    }
    //processing

    for(int i=0; i<26; i++) {
        for(int j=0; j<T; j++) {

            if(ocurrence[i][j]>0) {

                cout<<endl<<(char)(i+97)<<","<<j<<" is above zero";
                if(j==T-1) { //last element(column) of a row in ocurrence array...hmmmm
                noOfGems++;
                cout<<"\nno of gems updated";
            }
                continue;
            } else {

                break;

            }

        }

    }
    //o/p
    cout<<endl<<noOfGems;




    return 0;
}
