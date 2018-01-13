#include "Player.h"



Player::Player(const char * fname, const char * lname, int num, int hgt, int wgt, int playerAge, int years,const char * cllge) {
	//set bio
	bio temp(fname, lname, num, hgt, wgt, playerAge, years, cllge);
	this_player_bio = temp;
	stats temp1(this_player_bio.get_ID());
	this_player_stats = temp1;
}

Player::~Player() {

}