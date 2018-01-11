#include "PlayerBio.h"
#include <iostream>

using namespace std;

bio::bio(char fname, char lname, int num, int hgt, int wgt, int playerAge, int years, char cllge) {
	SetNumber(num);
	setID(fname, lname, number);
	SetInternals(hgt, wgt, playerAge, years);
	setCollege(cllge);
}

void bio::setFirstName(char fname) {
	FirstName = fname;
}

void bio::setLastName(char lname) {
	LastName = lname;
}

void bio::SetNumber(int num) {
	number = num;
}

void bio::setID(char fname, char lname, int number) {
	// put together first three fname, first three lname, and number to make id				TO DO
}

void bio::setCollege(char cllge) {
	college = cllge;
}


char bio::getFirstName() {
		return FirstName;
	}
char bio::getLastName() {
		return LastName;
	}
int bio::getNumber() {
		return number;
	}
char bio::getID() {
	return ID;
}
internals bio::getInternals() {
	return player;
}
char bio::getCollege() {
	return college;
}

void bio::printBio() {														//TO DO
	std::cout << "-------------------------------------------------------------------------------------------------------------------------------" << endl;
	std::cout << "                         " << getFirstName() << " " << getLastName() << " Number: " << getNumber() << " College" << getCollege() << "                         " << endl;
	std::cout << " Height: " << getInternals().height << " Weight: " << getInternals().weight << " Age: " << getInternals().age << " Years Pro: " << getInternals().yearsPro << " " << endl;
	std::cout << "-------------------------------------------------------------------------------------------------------------------------------" << endl;
}

bio::~bio() {

};

