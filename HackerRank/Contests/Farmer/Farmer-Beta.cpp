#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    freopen("FarmerIn.txt","r",stdin);
    int N=0,M=0;
    cin>>N>>M;
    bool farm[N][M];
    char ch,blank;
    blank=getchar();
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            ch=getchar();
            farm[i][j]=((int)ch-48);
            cout<<farm[i][j];
        }
        blank=getchar();
        cout<<endl;
    }

    int gaali=0,ways=0;
    int startx=0,starty=0;
    int I=0,J=0;
//end of input
    for(int i=0; i<N; i++) {
        int height=i+1;
        for(int j=0; j<M; j++) {
            int width=i+1;
            startx=0,starty=0;
            gaali=0;
            ways=0;
            while(starty+height<N) {
                while(startx+width<M) {
                    for(I=starty; I<height; I++) {
                        for(J=startx; J<width; J++) {
                            //now sum all the elements in plot
                            gaali=gaali+farm[I][J];
                            cout<<gaali;
                        }
                    }
                    if(gaali==height*width) {
                        ways++;
                    }
                    startx++;
                }
                starty++;
            }
            //cout<<ways<<" ";
        }
            cout<<endl;
    }
    return 0;
}
