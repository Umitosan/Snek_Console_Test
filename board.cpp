#include <iostream>
#include <conio.h>
#include <windows.h>
#include "board.h"
#include <vector>
#include <string>
using namespace std;



//Constructor definition
Board::Board()
{
    cout << "A new Board object was created!\n";

    tR = 22;
    tC = 52;

    //FILL the board with char
    for (int k=0; k < tR; k++ )
    {
         for (int kk = 0; kk < tC; kk++)
         {
              boardChar[k][kk] = ' ';
         }
    }


    //PRINT the board
    cout << "|----------------------------------------------------|\n";
    for (int i=0; i<tR; i++ )
    {
        cout << "|";
             for (int ii=0; ii<tC; ii++)
             {
                  cout << boardChar[i][ii];
             }
        cout << "|\n";
    }
    cout << "|----------------------------------------------------|\n";
    cout << "\n";
    //End print
};

// Destructor definition
Board::~Board() { };


void updateBoard(Board& tB2, Snek& tSnek)
{
    // add the snek object chars to the board object chars at the correct coordinates
	// add the head last so it will always show thus "[snekSize - 1 - k]"
	long snekSize = tSnek.snekBodyChar.size();
    for (int k = 0; k < snekSize; k++) {
        //save the snake body char element to board's char map
        tB2.boardChar [ (tSnek.snekBodyPos[snekSize - 1 - k][0]) ][ (tSnek.snekBodyPos[snekSize - 1 - k][1]) ] = tSnek.snekBodyChar[snekSize - 1 - k];
    }

    /*
        snekBodyPos[0][0] = row0
        snekBodyPos[0][1] = col0

        snekBodyPos[1][0] = row1
        snekBodyPos[1][1] = col1

        snekBodyPos[2][0] = row2
        snekBodyPos[2][1] = col2

        snekBodyPos[3][0] = row3
        snekBodyPos[3][1] = col3

        snekBodyPos[3][0] = row4
        snekBodyPos[3][1] = col4

        snekBodyPos[4][0] = row5
        snekBodyPos[4][1] = col5

        snekBodyPos[5][0] = row6
        snekBodyPos[5][1] = col6

        snekBodyPos[6][0] = row7
        snekBodyPos[6][1] = col7

        snekBodyPos[7][0] = row8
        snekBodyPos[7][1] = col9

        snekBodyPos[8][0] = row9
        snekBodyPos[8][1] = col9

        snekBodyPos[9][0] = row10
        snekBodyPos[9][1] = col10
    */
};



//printBoard takes a Board object and a last button pressed string
void printBoard(Board tB1, string& tLP, Snek& tSnek)
{
    system("cls");
    cout << "Last button pressed: " << tLP << " Head Pos row,col: " << tSnek.snekBodyPos[0][0] << "," << tSnek.snekBodyPos[0][1] << "\n";

    //Print all board chars 1 by 1
    cout << "|----------------------------------------------------|\n";
    for (int i = 0; i < tB1.tR; i++ )

    {
    cout << "|";
         for (int ii = 0; ii < tB1.tC; ii++)
         {
              //Print the actual current state of the board
              cout << tB1.boardChar[i][ii];
         }
    cout << "|\n";
    }
    cout << "|----------------------------------------------------|\n";
    //End print
};









