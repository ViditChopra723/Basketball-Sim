#include <iostream>
#include <string>
#include <stdlib.h>
#include "Player.h"

using namespace std;

int main() {
	int input = 0;
	Player temp('Vidi', 'Chop', 7, 170, 70, 21, 5, 'CSUF');

	cout << "Welcome to Vidit's Basketball Sim " << endl;
	while (input != -1) {
		cout << "input" << endl;
		cin >> input;
		temp.print();
	}




	return 0;
}