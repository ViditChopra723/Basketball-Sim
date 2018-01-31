/*
Player's Defensive Rating

if this player's rating in category is higher than Offensive player's during action they will succeed

e.g. Steph goes for layup with a 95 rating versus Tim Duncan who has a rim protection rating of 97. Duncan will block the shot.


Defending
	rim protection
	shot contest (2pt)
	shot contest (3pt)
pass steal
on ball steal
def_reb
def_ath
	def_speed
	def_jump



*/



#ifndef  PLAYERDEFENSE_H
#define PLAYERDEFENSE_H


#include "../Includes.h"



//defensive attributes
struct defending {
	int rim_protection;
	int shot_contest_two;
	int shot_contest_three;

};
//athletic attributes
struct def_ath {
	int def_speed;
	int def_jump;
};

class defense {
public:
	defense(string ID = "NULL") {

		string file_name = "assets/" + ID + "/" + ID + "DEF.txt";
		ifstream myfile;
		string line;
		int n = 0;

		//read from file
		myfile.open(file_name, ios::in);
		if (myfile.is_open()) {
			//read off file
			//set defending
			getline(myfile, line);
			int temp1 = atoi(line.c_str());
			this_player_defend.rim_protection = temp1;
			getline(myfile, line);
			temp1 = atoi(line.c_str());
			this_player_defend.shot_contest_two = temp1;
			getline(myfile, line);
			temp1 = atoi(line.c_str());
			this_player_defend.shot_contest_three = temp1;
			//set basics
			getline(myfile, line);
			pass_steal = atoi(line.c_str());
			getline(myfile, line);
			on_ball_steal = atoi(line.c_str());
			getline(myfile, line);
			def_reb = atoi(line.c_str());
			//set def_ath
			getline(myfile, line);
			this_player_ath_def.def_jump = atoi(line.c_str());
			getline(myfile, line);
			this_player_ath_def.def_speed = atoi(line.c_str());
			//end file
			myfile.close();

		}
		else cout << "did not open : def  " << ID << endl;
	}

	void print() {
		//print offense att
		cout << " DEFENDING " << endl;
		cout << "    rim_protection : " << get_defending().rim_protection << endl;
		cout << "    shot_contest_two : " << get_defending().shot_contest_two << endl;
		cout << "    shot_contest_three : " << get_defending().shot_contest_three << endl;
		cout << " DEFENSIVE PLAY " << endl;
		cout << "    pass_steal : " << get_pass_steal() << endl;
		cout << "    on_ball_steal : " << get_on_ball_steal() << endl;
		cout << " DEFENSIVE def_ath " << endl;
		cout << "    Defensive Rebouding : " << get_def_reb() << endl;
		cout << "    def_jumping : " << get_def_ath().def_jump << endl;
		cout << "    def_speed : " << get_def_ath().def_speed << endl;
		cout << " ------  END DEFENSE ------ " << endl;
	}

	void export_def(string ID) {
		//export offensive attributes
		ofstream myfile;
		myfile.open("assets/" + ID + "/" + ID + "DEF.txt");
		if (myfile.is_open()) {
			myfile << get_defending().rim_protection << endl;
			myfile << get_defending().shot_contest_two << endl;
			myfile << get_defending().shot_contest_three << endl;
			myfile << get_pass_steal() << endl;
			myfile << get_on_ball_steal() << endl;
			myfile << get_def_reb() << endl;
			myfile << get_def_ath().def_jump << endl;
			myfile << get_def_ath().def_speed << endl;

			myfile.close();
		}
		else cout << "did not open : def " << endl;
	}



	defending get_defending() { return this_player_defend; }
	int get_pass_steal() { return pass_steal; }
	int get_on_ball_steal() { return on_ball_steal; }
	int get_def_reb() { return def_reb; }
	def_ath get_def_ath() { return this_player_ath_def; }




private:
	defending this_player_defend;
	int pass_steal;
	int on_ball_steal;
	int def_reb;
	def_ath this_player_ath_def;



};


#endif // ! PLAYEROFFENSE_H


