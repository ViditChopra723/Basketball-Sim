#include "Player.h"

Player::Player(char fname, char lname, int num, int hgt, int wgt, int playerAge, int years, char cllge) {
	//set bio
	bio temp(fname, lname, num, hgt, wgt, playerAge, years, cllge);
	thisPlayer = temp;

}

Player::~Player() {

}