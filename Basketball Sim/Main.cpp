/*
Vidit Chopra
Irvine, California
1/11/2018 9:04 AM



Welcome to Vidit's Basketball Sim
input
1
--------------------------------------------------------------------------------------
NULL NULL Number: -1 College NULL
Height: -1 Weight: -1 Age: -1 Years Pro: -842150451
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
	
	Player temp;

	cout << "Welcome to Vidit's Basketball Sim " << endl;
	while (input != -1) {
		cout << "input" << endl;
		cin >> input;
		temp.print();
	}




	return 0;
}