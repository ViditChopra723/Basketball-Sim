/*
Player Class:
holds a player object
Players play on teams
Provides stats, abilities, and offense/defense numbers for a player. 

Player:
	bio
		internals
		name number
		health status
		college

	stats    ----> saved in file after every game
		PTS
		AST
		REB
		STLS
		BLK
		TOV
		FG%
		3PT%
	
	ability			//players special ability (boosts, powers)
		trigger			//when to use power
		energy			//energy required to use power

	off
		scoring (50 -100)
		assisting (50 - 100)
		dribbling (50 -100)
		off reb (50 - 100)
		athletics (50 -100)

	def
		on ball d (50 -100)
		off ball d (50 -100)
		steals (50 -100)
		blocks (50 -100)
		def reb (50 -100)



*/


#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "PlayerBio.h"
#include "PlayerStats.h"

using namespace std;


class Player {
public:
	Player(const char * fname = "NULL", const char * lname = "NULL" , int num = -1, int hgt = -1, int wgt = -1, int playerAge = -1, int years = -1, const char * cllge = "NULL", int mode = 0);
	void print() {
		this_player_bio.print_bio();
		this_player_stats.print_stats();
	}

	void export_player() {
		this_player_stats.export_stats(this_player_bio.get_ID() + ".txt");
		this_player_bio.export_bio(this_player_bio.get_ID() + "BIO.txt");
	}
	~Player();

private:
	bio this_player_bio;					//Health Info
	stats this_player_stats;				//stats
	
	//ability
	//offense
	//defense

};


#endif 

