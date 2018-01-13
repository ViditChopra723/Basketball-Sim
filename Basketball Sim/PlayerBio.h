#ifndef PLAYERBIO_H
#define PLAYERBIO_H

#include <string>
#include <iostream>

using namespace std;
/*

Player Bio displays the player's health information.

Internals - basic health infomation
	height
	weight
	age
	years pro

Bio - Trivia Info about Player
	Internals
	Name Number 
	ID			
	Injury Status			//to do
	College

sub member of the player class

*/

class internals {																								//internals keeps track of players height weight age and other basic information
public:
	internals(int hgt = -1, int wgt = -1, int player_age = -1, int years = -1)	
	{
		height = hgt;
		weight = wgt;
		age = player_age;
		years_pro = years;
	}
	
	void set_height(int hgt) { height = hgt; }
	void set_weight(int wgt) { weight = wgt; }
	void set_age(int p_age) { age = p_age; }
	void set_years_pro(int pro) { years_pro = pro; }
	int get_height() { return height; }
	int get_weight() { return weight; }
	int get_age() { return age; }
	int get_pro() { return years_pro; }
	

private:
	int height;
	int weight;
	int age;
	int years_pro;
};

class bio {												//Player's Health and Basic Information
public:

	bio(const char * fname = "NULL", const char * lname = "NULL", unsigned const int num = -1, unsigned const int hgt = -1, unsigned const int wgt = -1, unsigned const int player_age = -1, unsigned const int years = -1, const char * cllge = "NULL") :
		first_name(fname),
		last_name(lname),
		number(num),
		college(cllge)
	{
		set_internals(hgt, wgt, player_age, years);
		set_ID(fname, lname, num);
	};

	//setters
	void set_first_name(const char * fname);
	void set_last_name(const char * lname);
	void set_number(int num);
	void set_ID(const char * fname, const char * lname, int number);
	void set_internals(int hgt, int wgt, int player_age, int years) {
		player->set_height(hgt);
		player->set_weight(wgt);
		player->set_age(player_age);
		player->set_years_pro(years);
	}
	void set_college(const char * cllge);

	//getters
	const char * get_first_name();
	const char * get_last_name();
	int get_number();
	std::string get_ID() {
		return ID;
	};
	internals * get_internals();
	const char * get_college();
 
	//print bio
	void print_bio();
	~bio();

private:
	const char * first_name;
	const char * last_name;
	std::string ID;
	int number;
	
	internals * player = new internals;

	const char * college;

};

#endif // !PLAYERBIO_H
