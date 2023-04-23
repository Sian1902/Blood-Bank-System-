#pragma once
#include<map>
#include <string>
using namespace std;
class BloodBank
{
	int numOfDonors;
	int numOfReceivers;
	int numOfHospitals;
	map<string, int> bloodTypeQuantities;

public:
	BloodBank(int numOfDonors, int numOfReceivers, int numOfHospitals);
	void adjustQuantity(string type, int quantity);
	void addQuantity(string type, int quantity);
	void deductQuantity(string type, int quantity);
	void addType(string type, int quantity);
	void displayTypeQuantity(string type);
	void addHospitals(int num=1);
	void addReceivers(int num=1);
	void addDonor(int num = 1);
};

