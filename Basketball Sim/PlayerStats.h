#ifndef PLAYERSTATS_H
#define PLAYERSTATS_H

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
using namespace std;

/*
stats    ----> saved in file after every game
	PTS
	AST
	REB
	STLS
	BLK
	TOV
	FG%
	3PT%
*/

class stats {
public:
	stats(string ID = "NULL") {
		string file_name;
		file_name = ID;
		file_name += ".txt";

		if (file_name == "NULL.txt") {
			return;
		}
		else {
			get_stats(file_name);
			int total_games = total_array[10];

			//calc stats
			for (int i = 0; i < 6; i++) {
				avg_array[i] = calc_stat(total_array[i], total_games);
			}
			int j = 6;
			for (int i = 6; i < 8; i++) {
				avg_array[i] = calc_stat(total_array[j], total_array[j + 1]);
				j += 2;
			}
			//end calc

		}
	};

	void get_stats(string file_name) {
		//load in all total stats and total games
		ifstream myfile;
		string line;
		int n = 0;
		myfile.open(file_name, ios::in);
		if (myfile.is_open()) {
			while (getline(myfile, line)) {
				total_array[n] = atoi(line.c_str());
				n++;
			}
			myfile.close();
		}
		else cout << "did not open " << endl;

	}


	 float calc_stat( float stat,  float compare) {
		 if (compare == 0) {
			 return 0.0;
		}
		return stat / compare;
	}
	
	void print_stats() {
		//print out all stats
		cout << fixed << setprecision(2) << "Averages : " << avg_array[0] << "ppg " << avg_array[1] << "apg " << avg_array[2] << "rpg " << avg_array[3] << "spg " << avg_array[4] << "bpg " << avg_array[5] << "tovpg " << avg_array[6]* 100 << "fg% " << avg_array[7]* 100 << "3p% " << total_array[10] << "games played" << endl;
	}

	void export_stats(string file_name) {
		//export total stats
		ofstream myfile;
		myfile.open(file_name);
		if (myfile.is_open()) {
			for (int i = 0; i < 11; i++) {
				myfile << total_array[i] << endl;
			}
			myfile.close();
		}
		else cout << "did not open " << endl;
		
	}


	~stats() {};

	float total_array [13];
	int num_total = 0;
	float avg_array[9];
	int num_avg = 8;


private:
	

};


#endif // !1

