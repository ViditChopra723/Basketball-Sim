#ifndef PLAYERBIO_H
#define PLAYERBIO_H

/*
seems to not be printing internals right and the name
make the id work

*/

struct internals {
public:
	internals(int hgt = -1 , int wgt = -1, int playerAge = -1 , int years = -1) {
		height = height;
		weight = weight;
		age = playerAge;
		yearsPro = years;
	}
	int height;
	int weight;
	int age;
	int yearsPro;

private:
	
};

class bio {
public:
	bio(char fname = 'NULL', char lname = 'NULL', int num = -1, int hgt = -1, int wgt = -1, int playerAge = -1, int years = -1, char cllge = 'NULL');
	//setters
	void setFirstName(char fname);
	void setLastName(char lname);
	void SetNumber(int num);
	void setID(char fname, char lname, int number);
	void SetInternals(int hgt, int wgt, int playerAge, int years) {
		internals temp(hgt, wgt, playerAge, years);
		player = temp;
	}
	void setCollege(char cllge);

	//getters
	char getFirstName();
	char getLastName();
	int getNumber();
	char getID();
	internals getInternals();
	char getCollege();
 
	//print bio
	void printBio();
	~bio();

private:
	char FirstName;
	char LastName;
	char ID;
	int number;
	
	internals player;

	char college;

};

#endif // !PLAYERBIO_H
