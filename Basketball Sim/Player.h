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
	Player(const char * fname = "NULL", const char * lname = "NULL" , int num = -1, int hgt = -1, int wgt = -1, int playerAge = -1, int years = -1, const char * cllge = "NULL");
	void print() {
		this_player.print_bio();
	}
	~Player();

private:
	bio this_player;					//to do
	//bio
	//stats
	//ability
	//offense
	//defense

};


#endif // !1

