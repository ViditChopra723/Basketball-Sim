/*
Player Class:
holds a player object
Players play on teams
Provides stats, abilities, and offense/defense numbers for a player. 

*/


#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "PlayerBio.h"

using namespace std;


class Player {
public:
	Player(char fname, char lname, int num, int hgt, int wgt, int playerAge, int years, char cllge);
	void print() {
		thisPlayer.printBio();
	}
	~Player();

private:
	bio thisPlayer;
	//bio
	//stats
	//ability
	//offense
	//defense

};


#endif // !1

