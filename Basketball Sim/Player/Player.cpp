#include "../Includes.h"



Player::Player(const char * fname, const char * lname, int num, int mode) {
	//set ID
	string first = fname;
	string last = lname;
	ID = first + last + to_string(num);

	//set bio
	bio temp(ID);
	this_player_bio = temp;
	//set stats
	stats temp1(ID);
	this_player_stats = temp1;
	//set offense
	offense temp2(ID);
	this_player_off = temp2;
	//set defense 
	defense temp3(ID);
	this_player_def = temp3;

}

Player::~Player() {

}