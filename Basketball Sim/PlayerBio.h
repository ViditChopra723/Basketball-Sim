#ifndef PLAYERBIO_H
#define PLAYERBIO_H

struct internals {
	internals(int hgt = -1 , int wgt = -1, int playerAge = -1 , int years = -1) {
		height = height;
		weight = weight;
		age = playerAge;
		yearsPro = years;
	}


private:
	int height;
	int weight;
	int age;
	int yearsPro;
};

class bio {
public:
	bio();
	void setFirstName(char fname);
	void setLastName(char lname);
	void SetNumber(int num);
	void setID(char fname, char lname, int number);
	

	void SetInternals(int hgt, int wgt, int playerAge, int years) {
		internals temp(hgt, wgt, playerAge, years);
		player = temp;
	}

	void setCollege(char cllge);

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
