/*
Vidit Chopra
Irvine, California
1/11/2018 9:04 AM


Welcome to Vidit's Basketball Sim
--------------------------------------------------------------------------------------
Vidit Chopra #7

Height: 5ft 10in  Weight: 170lbs  Age: 21  Years Pro: 7  College CSUF
--------------------------------------------------------------------------------------
Averages : 22.31ppg 5.78apg 3.16rpg 2.31spg 0.76bpg 1.73tovpg 43.03fg% 30.723p% 45.00games played
--------------------------------------------------------------------------------------
Lebron James #23

Height: 6ft 8in  Weight: 240lbs  Age: 32  Years Pro: 15  College High School
--------------------------------------------------------------------------------------
Averages : 27.13ppg 7.10apg 7.29rpg 1.65spg 0.78bpg 3.44tovpg 50.30fg% 34.333p% 1103.00games played
input







*/



#include <iostream>
#include <string>
#include <stdlib.h>
#include "Player.h"

using namespace std;

int main() {
	int input = 0;
	
	Player temp( "Vidit", "Chopra", 7, 1);
	Player temp1( "Lebron", "James", 23, 1);
	cout << "Welcome to Vidit's Basketball Sim " << endl;
	 do {
		temp.print();
		
		temp1.print();
		cout << "input" << endl;
		cin >> input;
	 } while (input != -1);
	temp.export_player();
	temp1.export_player();


	return 0;
}