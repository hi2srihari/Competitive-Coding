#include<iostream>
#include<stdlib.h>
using namespace std;
//OKAY THIS PROGRAM INTENDS TO IMPLEMENT A SIMPLE GRAPHICAL EDITOR
//"PICTURES" ARE AN ARRAY OF PIXELS.M COLUMNS AND N ROWS
//THE COMMANDS OFFERED ARE:
//I M N   CREATES AN M*N ARRAY ALL COLORED WHITE(0)
//C CLEAR RESETTING ALL PIXELS TO WHITE
//L X Y C MAKE THE PIXEL AT X,Y HAVE COLOR C
int regionX[200]= {},regionY[200]= {},cx=0,cy=0,m,n; //vertical and horizontal limits//HOLDS THE X AND Y COORDINATES OF A GROUP OF 'REGIONS',cx and cy are used to iterate thru
int findRegion(char p[100][100],int x,int y)
{
    //FINDS ALL POINTS THAT BELONG TO PARTICULAR REGION
    cx++;
    cy++;//INCREMENT THE REGION ARRAY COUNTER
    //8 POSSIBLE COMBOS
    if(p[x][y]==p[x-1][y])//SAME COLURA?
    {
        regionX[cx]=x-1;//ADD THE POINTS TO THE REGION ARRAY
        regionY[cy]=y-1;
        cout<<p[x][y]<<" "<<p[x-1][y]<<cx<<" "<<p[cx]<<cy<<" "<<p[cy]<<endl;
        //CALL THIS FN AGAIN RECURSIVELY
    }
    if(p[x][y]==p[x+1][y])//SAME COLURA?
    {
        regionX[cx]=x-1;
        regionY[cy]=y;
        //CALL THIS FN AGAIN RECURSIVELY
    }
    if(p[x][y]==p[x][y+1])//SAME COLURA?
    {
        regionX[cx]=x-1;
        regionY[cy]=y+1;
        //CALL THIS FN AGAIN RECURSIVELY
    }
    if(p[x][y]==p[x][y-1])//SAME COLURA?
    {
        regionX[cx]=x;
        regionY[cy]=y-1;
        //CALL THIS FN AGAIN RECURSIVELY
    }

    return 0;
}

main()
{

    char c,pic[100][100]= {},op; //c -color...op -operation
    int x1,x2,y1,y2;//FOR PERFORMING OPERATIONS
    while(1)
    {
        cin>>op;
        switch(op)
        {
        case 'X'://TERMINATE SESSION
            exit(100);
            break;
        case 'I'://CREATE A CANVAS
            cin>>m>>n;
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                    pic[i][j]='0';//ALL PIXELS INITIALLY ZEROES
                    cout<<pic[i][j];
                }
                cout<<endl;//NEXT LINE
            }
            break;
        case 'L':
            cin>>x1>>y1>>c;//RECEIVE INPUTS
            pic[x1][y1]=c;//COLOURING
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                    cout<<pic[i][j];
                }
                cout<<endl;//NEXT LINE
            }
            break;
        case 'C':
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                    pic[i][j]='0';//RESET TO ZEROES
                    cout<<pic[i][j];
                }
                cout<<endl;//NEXT LINE
            }
            break;
        case 'H'://DRAWING A HORIZONTAL LINE BETWEN Y1 AND Y2
            cin>>x1>>y1>>y2>>c;
            for(int i=y1; i<=y2; i++)
            {
                pic[x1][i]=c;
            }
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                    cout<<pic[i][j];
                }
                cout<<endl;//NEXT LINE
            }
            break;
        case 'V'://DRAWING A VERTICAL LINE B/W X1 AND X2
            cin>>x1>>x2>>y1>>c;
            for(int i=x1; i<=x2; i++)
            {
                pic[i][y1]=c;
            }
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                    cout<<pic[i][j];
                }
                cout<<endl;//NEXT LINE
            }
            break;
            //DON'T CONFUSE BETWEEN COLUMN NUMBERS AND COORDINATES
            //COLUMN NUMBERS IS ANALOGOUS TO TO X COORDINATE
            //ROW NO TO Y..
        case 'K'://DRAW A FILLED RECTANGLE
            cin>>x1>>y1>>x2>>y2>>c;
            //DRAW A FILLED RECTANGLE...
            for(int i=y1; i<=y2; i++)
            {
                for(int j=x1; j<=x2; j++)
                {
                    pic[i][j]=c;
                }
            }
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                    cout<<pic[i][j];
                }
                cout<<endl;//NEXT LINE
            }
            break;
        case 'F'://TO FILL A 'REGION' WITH A COLOUR
            cin>>x1>>y1>>c;//pic[x1][y1] and surrounding regions to be filled with c
            regionX[cx]=x1;
            regionY[cy]=y1;
            findRegion(pic,x1,y1);
            for(int i=0; i<cx; i++)
            {
                pic[regionX[cx]][regionY[cx]]=c;
            }
            //NOW DISPLAY
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                    cout<<pic[i][j];
                }
                cout<<endl;//NEXT LINE
            }

        }
    }

}
