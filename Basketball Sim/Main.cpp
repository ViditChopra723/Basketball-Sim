/*
Vidit Chopra
Irvine, California
1/11/2018 9:04 AM


Welcome to Vidit's Basketball Sim
--------------------------------------------------------------------------------------
Vidit Chopra #7

Height: 5ft 10in  Weight: 170lbs  Age: 21  Years Pro: 7  College CSUF
--------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------
Lebron James #23

Height: 6ft 8in  Weight: 240lbs  Age: 32  Years Pro: 15  College High School
--------------------------------------------------------------------------------------
input







*/



#include <iostream>
#include <string>
#include <stdlib.h>
#include "Player.h"

using namespace std;

int main() {
	int input = 0;
	
	Player temp("Vidit", "Chopra", 7, 70, 170, 21, 7, "CSUF");
	//Player temp1("Lebron", "James", 23, 80, 240, 32, 15, "High School");
	cout << "Welcome to Vidit's Basketball Sim " << endl;
	 do {
		temp.print();
		//temp1.print();
		cout << "input" << endl;
		cin >> input;
	 } while (input != -1);




	return 0;
}