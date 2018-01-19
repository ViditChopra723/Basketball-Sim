#ifndef PLAYERBIO_H
#define PLAYERBIO_H

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cstdlib>

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
	bio(string ID = "NULL") 
		
	{
			string file_name = "assets/" + ID + "/" + ID + "BIO.txt";
			ifstream myfile;
			string line;
			int n = 0;
			myfile.open(file_name, ios::in);
			if (myfile.is_open()) {
				//read bio file
				getline(myfile, line);
				first_name = line;
				//set_first_name(line.c_str());
				getline(myfile, line);
				last_name = line;
				getline(myfile, line);
				number = atoi(line.c_str());
				getline(myfile, line);
				college = line;
				//set internals
				getline(myfile, line);
				int height = atoi(line.c_str());
				getline(myfile, line);
				int weight = atoi(line.c_str());
				getline(myfile, line);
				int age = atoi(line.c_str());
				getline(myfile, line);
				int years = atoi(line.c_str());
				set_internals(height, weight, age, years);
				//end file
				myfile.close();
			}
			else cout << "did not open : bio file " << ID << endl;
	}
	//setters
	void set_internals(int hgt, int wgt, int player_age, int years) {
		player->set_height(hgt);
		player->set_weight(wgt);
		player->set_age(player_age);
		player->set_years_pro(years);
	}
	//getters
	string get_first_name();
	string get_last_name();
	int get_number();
	internals * get_internals();
	string get_college();
 
	//print bio
	void print_bio();
	~bio();

	//export bio to file
	void export_bio(string file_name) {
		ofstream myfile;
		myfile.open(file_name);
		if (myfile.is_open()) {
			myfile << get_first_name() << endl;
			myfile << get_last_name() << endl;
			myfile << get_number() << endl;
			myfile << get_college() << endl;
			myfile << get_internals()->get_height() << endl;
			myfile << get_internals()->get_weight() << endl;
			myfile << get_internals()->get_age() << endl;
			myfile << get_internals()->get_pro() << endl;

			myfile.close();
		}
		else cout << "did not open " << endl;
	}
private:
	string first_name;
	string last_name;
	int number;
	
	internals * player = new internals;

	string college;

};

#endif // !PLAYERBIO_H
