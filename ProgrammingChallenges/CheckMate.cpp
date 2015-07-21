#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
main()
{

    freopen("CheckMateIn.txt","r",stdin);//input taken from file
    int game=0;//GAME NO.
    while(1)
    {
        game++;//increment game no
        int empt=0,checkCode=0,blackKingX=-1,blackKingY=-1,whiteKingX=-1,whiteKingY=-1;//check code : 1 2 3 for three possibilities
        char board[8][8];
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                cin>>board[i][j];
                if(board[i][j]=='.')
                {
                    empt++;
                }
                if(board[i][j]=='k')//STORE BLACK KING'S POSITION
                {
                    blackKingX=i,blackKingY=j;
                }
                if(board[i][j]=='K')//STORE WHITE KING'S POSITION
                {
                    whiteKingX=i,whiteKingY=j;
                }
            }
            if(empt==64)
            {
                cout<<endl<<"Program Kinda Terminated\n";//IF INPUT IS  ALL DOTS THEN CLOSE
                exit(100);
            }
        }
        //THE IDEA: IS TO EXAMINE ALL THE POSITIONS SURROUNDING BOTH THE KINGS AND COME UP WITH AN ANSWER
        //FIRST CHECK WHITE KING...NOTHING RACIST/
        //CHECK FOR ROOK||QUEEN IN 4 DIRECTIONS AND BISHOP OR QUEEN ALONE DIAGONALS
        for(int i=whiteKingX; i>0; i--) //LEFT SIDE
        {
            if(board[i][whiteKingY]=='r'||board[i][whiteKingY]=='q')
            {
                checkCode=2;//ROOK OR QUEEN EXISTS ON LEFT
            }
        }
        for(int i=whiteKingX; 7-i>0; i++) //RIGHT SIDE
        {
            if(board[i][whiteKingY]=='r'||board[i][whiteKingY]=='q')
            {
                checkCode=2;//ROOK OR QUEEN EXISTS ON RIGHT
            }
        }
        for(int i=whiteKingY; 7-i>0; i++) //TOP SIDE
        {
            if(board[i][whiteKingY]=='r'||board[i][whiteKingY]=='q')
            {
                checkCode=2;//ROOK OR QUEEN EXISTS ON TOP
            }
        }
        for(int i=whiteKingY; i>0; i--) //BOTTOM SIDE
        {
            if(board[i][whiteKingY]=='r'||board[i][whiteKingY]=='q')
            {
                checkCode=2;//ROOK OR QUEEN EXISTS ON BOTTOM
            }
        }
        //NOW BISHOP OR QUEEN...
        for(int i=whiteKingX,j=whiteKingY; i>0,j>0; i--,j--) //UPPER LEFT DIAGONAL
        {
            if(board[i][j]=='b'||board[i][whiteKingY]=='q')
            {
                checkCode=2;//BISHOP OR QUEEN EXISTS ON UPPER LEFT
            }
        }
        for(int i=whiteKingX,j=whiteKingY; 7-i>0,j>0; i++,j--) //UPPER RIGHT DIAGONAL
        {
            if(board[i][j]=='b'||board[i][whiteKingY]=='q')
            {
                checkCode=2;//BISHOP OR QUEEN EXISTS ON UPPER RIGHT
            }
        }
        for(int i=whiteKingX,j=whiteKingY; i>0,7-j>0; i--,j++) //BOTTOM LEFT DIAGONAL
        {
            if(board[i][j]=='b'||board[i][whiteKingY]=='q')
            {
                checkCode=2;//BISHOP OR QUEEN EXISTS ON BOTTOM LEFT
            }
        }
        for(int i=whiteKingX,j=whiteKingY; 7-i>0,7-j>0; i++,j++) //BOTTOM RIGHT DIAGONAL
        {
            if(board[i][j]=='b'||board[i][whiteKingY]=='q')
            {
                checkCode=2;//BISHOP OR QUEEN EXISTS ON BOTTOM RIGHT
            }
        }
        //NOW PAWNS i-1,j-1 and i+1,j-1
        if(board[whiteKingX-1][whiteKingY-1]=='p'||board[whiteKingX+1][whiteKingY-1]=='p')//PAWN EXISTS IN 2 POSITIONS
        {
            checkCode=2;
        }
        //KNIGHT CANCEL!!
        if(checkCode==2)
            cout<<"Game #"<<game<<": white king is in check";
    }

}
