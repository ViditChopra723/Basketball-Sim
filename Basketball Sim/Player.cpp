#include "Player.h"



Player::Player(const char * fname, const char * lname, int num, int hgt, int wgt, int playerAge, int years,const char * cllge) {
	//set bio
	bio temp(fname, lname, num, hgt, wgt, playerAge, years, cllge);
	this_player = temp;

}

Player::~Player() {

}