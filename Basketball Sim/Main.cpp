/*
Vidit Chopra
Irvine, California
1/11/2018 9:04 AM



Welcome to Vidit's Basketball Sim
input
1
--------------------------------------------------------------------------------------
Vidit Chopra Number: 7 College CSUF
Height: 70 Weight: 170 Age: 21 Years Pro: 7
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

	cout << "Welcome to Vidit's Basketball Sim " << endl;
	 do {
		temp.print();
		cout << "input" << endl;
		cin >> input;
	 } while (input != -1);




	return 0;
}