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

#include "../Includes.h"



class Player {
public:
	Player(const char * fname = "NULL", const char * lname = "NULL" , int num = -1,  int mode = 0);
	void print() {
		this_player_bio.print_bio();
		this_player_stats.print_stats();
		cout << "\n ATTRIBUTES \n " << endl;
		this_player_off.print();
		this_player_def.print();
	}

	void export_player() {
		this_player_stats.export_stats("assets/" + ID + "/" + ID + "STATS");
		this_player_bio.export_bio("assets/" + ID + "/" + ID + "BIO");
		this_player_off.export_off(ID);
		this_player_def.export_def(ID);
	}

	~Player();

private:
	bio this_player_bio;					//Health Info
	stats this_player_stats;				//stats
	string ID;
	//ability
	offense this_player_off; //offense
	defense this_player_def; // defense
};


#endif 

