#include "PlayerBio.h"
#include <iostream>

using namespace std;


void bio::set_first_name(const char * fname) {
	first_name = fname;
}

void bio::set_last_name(const char * lname) {
	last_name = lname;
}

void bio::set_number(int num) {
	number = num;
}

void bio::set_ID(char fname, char lname, int number) {
	// put together first three fname, first three lname, and number to make id				TO DO
}

void bio::set_college(const char * cllge) {
	college = cllge;
}


const char * bio::get_first_name() {
		return first_name;
	}
const char * bio::get_last_name() {
		return last_name;
	}
int bio::get_number() {
		return number;
	}
const char * bio::get_ID() {
	return ID;
}
internals * bio::get_internals() {
	return player;
}
const char * bio::get_college() {
	return college;
}

void bio::print_bio() {														//TO DO
	std::cout << "--------------------------------------------------------------------------------------" << endl;
	std::cout << "              " << get_first_name() << " " << get_last_name() << " #" << get_number() << endl << "      " << endl;
	std::cout << "  Height: " << get_internals()->get_height() << " Weight: " << get_internals()->get_weight() << " Age: " << get_internals()->get_age() << " Years Pro: " << get_internals()->get_pro() << " College " << get_college() << " " << endl;
	std::cout << "--------------------------------------------------------------------------------------" << endl;
}

bio::~bio() {

};

