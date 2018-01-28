#include "../Includes.h"




string bio::get_first_name() {
		return first_name;
	}
string bio::get_last_name() {
		return last_name;
	}
int bio::get_number() {
		return number;
	}
internals * bio::get_internals() {
	return player;
}
string bio::get_college() {
	return college;
}

void bio::print_bio() {														
	std::cout << "--------------------------------------------------------------------------------------" << endl;
	std::cout << "              " << get_first_name() << " " << get_last_name() << " #" << get_number() << endl << "      " << endl;
	std::cout << "  Height: " << get_internals()->get_height()/12 << "ft " << get_internals()->get_height()%12 << "in "  << " Weight: " << get_internals()->get_weight() << "lbs  Age: " << get_internals()->get_age() << "  Years Pro: " << get_internals()->get_pro() << "  College " << get_college() << " " << endl;
	std::cout << "--------------------------------------------------------------------------------------" << endl;
}

bio::~bio() {

};

