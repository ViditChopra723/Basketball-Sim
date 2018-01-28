/*
Player's Offense Rating

if this player's rating in category is higher than defender's during action they will succeed 

e.g. Lebron goes for layup with a 99 rating versus Tim Duncan who has a rim protection rating of 97. Lebron will score. 


scoring
	layup
	midrange
	3
assisting
dribbling
rebounding
athletics 
	speed
	jump



*/



#ifndef  PLAYEROFFENSE_H
#define PLAYEROFFENSE_H


#include "../Includes.h"


//scoring attributes
struct scoring {
	int layup;
	int midrange;
	int three;

};
//athletic attributes
struct athletics {
	int speed;
	int jump;
};

class offense {
public:
	offense(string ID = "NULL" ) {

		string file_name = "assets/" + ID + "/" + ID + "OFF.txt";
		ifstream myfile;
		string line;
		int n = 0;

		//read from file
		myfile.open(file_name, ios::in);
		if (myfile.is_open()) {
			//read off file
			//set scoring
			getline(myfile, line);
			int temp1 = atoi(line.c_str());
			this_player_score.layup = temp1;
			getline(myfile, line);
			temp1 = atoi(line.c_str());
			this_player_score.midrange = temp1;
			getline(myfile, line);
			temp1 = atoi(line.c_str());
			this_player_score.three = temp1;
			//set basics
			getline(myfile, line);
			assisting = atoi(line.c_str());
			getline(myfile, line);
			dribbling = atoi(line.c_str());
			getline(myfile, line);
			rebounding = atoi(line.c_str());
			//set athletics
			getline(myfile, line);
			this_player_ath.jump = atoi(line.c_str());
			getline(myfile, line);
			this_player_ath.speed = atoi(line.c_str());
			//end file
			myfile.close();

		}
		else cout << "did not open : off  " << ID << endl;
	}

	void print(){
		//print offense att
		cout << " SCORING " << endl;
		cout << "    Layup : " << get_scoring().layup << endl;
		cout << "    Midrange : " << get_scoring().midrange << endl;
		cout << "    Three : " << get_scoring().three << endl;
		cout << " PLAYMAKING " << endl;
		cout << "    Assisting : " << get_assisting() << endl;
		cout << "    Dribbling : " << get_dribbling() << endl;
		cout << " ATHLETICS " << endl;
		cout << "    Offensive Rebouding : " << get_rebounding() << endl;
		cout << "    Jumping : " << get_athletics().jump << endl;
		cout << "    Speed : " << get_athletics().speed << endl;
		cout << " ------  END OFFENSE ------ " << endl;
	}

	void export_off(string ID) {
		//export offensive attributes
		ofstream myfile;
		myfile.open("assets/" + ID + "/" + ID + "OFF.txt");
		if (myfile.is_open()) {
			myfile << get_scoring().layup << endl;
			myfile << get_scoring().midrange << endl;
			myfile << get_scoring().three << endl;
			myfile << get_assisting() << endl;
			myfile << get_dribbling() << endl;
			myfile << get_rebounding() << endl;
			myfile << get_athletics().jump << endl;
			myfile << get_athletics().speed << endl;

			myfile.close();
		}
		else cout << "did not open : off " << endl;
	}
	


	scoring get_scoring() { return this_player_score; }
	int get_assisting() { return assisting; }
	int get_dribbling() { return dribbling;  }
	int get_rebounding() { return rebounding; }
	athletics get_athletics() { return this_player_ath; }




private:
	scoring this_player_score;
	int assisting;
	int dribbling;
	int rebounding;
	athletics this_player_ath;



};


#endif // ! PLAYEROFFENSE_H

