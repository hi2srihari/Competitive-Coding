#include<iostream>
#include<stdio.h>
using namespace std;
/*int  noOfEmptySlots(bool a[][1024],int h,int w)//returns the no of epmty slots of a given size in an array
{
    int slots=0;
    int wth=0,ht=0;

}*/
int main()
{
    // freopen("FarmerIn.txt","r",stdin);
    int gaali=0,starth=0,startw=0;
    int N=0,M=0;
    bool farm[1024][1024]= {};
    cin>>N>>M;
    char ch,blank;
    blank=getchar();
    int result[1024][1024]= {};
    int height=0,width=0;
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            ch=getchar();
            //cout<<"ch "<<ch<<endl;
            farm[i][j]=((int)ch-48);
        }
        blank=getchar();
    }
    /* for(int i=0;i<N;i++)
     {
         for(int j=0;j<M;j++)
         {
             cout<<farm[i][j];
         }
         cout<<endl;
     }*/
    for(int x=0; x<N; x++) {
        for(int y=0; y<M; y++) {

            height=x+1;
            width=y+1;
            while(starth<N) {
                startw=0;
                while(startw<M) {
                    gaali=0;
                    for(int p=starth; p<height; p++) {/*consider a particular location of the size of the barn,and check if contiguously empty*/
                        for(int q=startw; q<width; q++) {
                            gaali=gaali+farm[p][q];
                            cout<<"\ngaali mamaaaa";
                        }
                    }
                    if(gaali==height*width) {//if contiguously 1s
                        result[x][y]++;
                        cout<<"\nresults are out!!";
                    }
                    startw=startw+width;
                }

                starth=starth+height;
            }
            cout<<result[x][y]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
