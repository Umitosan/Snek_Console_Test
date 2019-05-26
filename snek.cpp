#include <iostream>
#include <conio.h>
#include <windows.h>
#include "snek.h"
#include <vector>
using namespace std;


// Constructor
Snek::Snek ()
{
	//assign correct chars for snake body
	snekBodyChar = { '&','O','O','O','O','O','O','O','.',' ' };

	// set starting positions using head
	for (int col = 0; col < snekBodyChar.size(); col++) {
		snekBodyPos[col][0] = 10;
		snekBodyPos[col][1] = 20 - col;
	}
}

// Destructor
Snek::~Snek() { cout << "A snek Died!\n"; }

int Snek::getSize()
{
    return snekBodyChar.size();
}



void moveHeadUp(Snek& tmpS) {
	if (tmpS.snekBodyPos[0][0] >= 1 ) { // note: playable area starts at boardChar[1][1]
		//update all the body positions except for the head
		updateSnekBody(tmpS);
		// move head last
		tmpS.snekBodyPos[0][0] -= 1;
    } 
}

void moveHeadDown(Snek& tmpS) {
	if (tmpS.snekBodyPos[0][0] <= 20) {
		//update all the body positions except for the head
		updateSnekBody(tmpS);
		//move head last
		tmpS.snekBodyPos[0][0] += 1;
	}
}

void moveHeadLeft(Snek& tmpS) {
	if (tmpS.snekBodyPos[0][1] >= 1) {
		//update all the body positions except for the head
		updateSnekBody(tmpS);
		//move head last
		tmpS.snekBodyPos[0][1] -= 1;
	}
}

void moveHeadRight(Snek& tmpS) {
	if (tmpS.snekBodyPos[0][1] <= 50) {
		//update all the body positions except for the head
		updateSnekBody(tmpS);
		//move head last
		tmpS.snekBodyPos[0][1] += 1;
	}
}

void updateSnekBody(Snek& tmpSS)
{
    tmpSS.snekBodyPos[9][0] = tmpSS.snekBodyPos[8][0];
    tmpSS.snekBodyPos[9][1] = tmpSS.snekBodyPos[8][1];
    tmpSS.snekBodyPos[8][0] = tmpSS.snekBodyPos[7][0];
    tmpSS.snekBodyPos[8][1] = tmpSS.snekBodyPos[7][1];
    tmpSS.snekBodyPos[7][0] = tmpSS.snekBodyPos[6][0];
    tmpSS.snekBodyPos[7][1] = tmpSS.snekBodyPos[6][1];
    tmpSS.snekBodyPos[6][0] = tmpSS.snekBodyPos[5][0];
    tmpSS.snekBodyPos[6][1] = tmpSS.snekBodyPos[5][1];
    tmpSS.snekBodyPos[5][0] = tmpSS.snekBodyPos[4][0];
    tmpSS.snekBodyPos[5][1] = tmpSS.snekBodyPos[4][1];
    tmpSS.snekBodyPos[4][0] = tmpSS.snekBodyPos[3][0];
    tmpSS.snekBodyPos[4][1] = tmpSS.snekBodyPos[3][1];
    tmpSS.snekBodyPos[3][0] = tmpSS.snekBodyPos[2][0];
    tmpSS.snekBodyPos[3][1] = tmpSS.snekBodyPos[2][1];
    tmpSS.snekBodyPos[2][0] = tmpSS.snekBodyPos[1][0];
    tmpSS.snekBodyPos[2][1] = tmpSS.snekBodyPos[1][1];
    tmpSS.snekBodyPos[1][0] = tmpSS.snekBodyPos[0][0];
    tmpSS.snekBodyPos[1][1] = tmpSS.snekBodyPos[0][1];
}



