/*
ability class - player's special power that boosts one or more of their attributes. 
i.e. Lebron has chasedown which increases his speed, jump, block, and rebound by 8.this effect lasts 1 turn. and the cooldown is 3 turns.  

ability
public:
	constructor - read in ability for player from file and store
	int use_ability - add boosts to stats for X turns in game
	void ability_done - when X turns is over, boost is taken off. 
	bool on_cooldown - return true if ability on cooldown
	void print ability_stats - print out the abilities stat boost, # of turns, and cooldown time. 
	destructor
private:
	string ability_name
	vector <string> boost_these_stats //holds which stats to boost
	int boost_amount
	int ability_time //how many turns ability lasts
	int cooldown_time //how long the cooldown on the ability is

*/



#ifndef ABILITY_H
#define ABILITY_H


#include "../Includes.h"

class ablility {
public:




private:

};



#endif