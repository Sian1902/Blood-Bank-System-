#include "BloodBank.h"
#include<iterator>
#include <assert.h>
#include<iostream>

BloodBank::BloodBank(int numOfDonors,int numOfReceivers,int numOfHospitals) 
{
		this->numOfDonors = numOfDonors;
		this->numOfReceivers = numOfReceivers;
		this->numOfHospitals = numOfHospitals;
}
void BloodBank::adjustQuantity(string type, int quantity) {
	map<string,int>::iterator it= bloodTypeQuantities.find(type);
	it->second = quantity;
}
void BloodBank::addQuantity(string type, int quantity) {
	map<string, int>::iterator it = bloodTypeQuantities.find(type);
	assert(it->second >= 0);
	it->second += quantity;
}
void BloodBank::deductQuantity(string type, int quantity) {
	map<string, int>::iterator it = bloodTypeQuantities.find(type);
	assert(it->second >= 0);
	it->second -= quantity;
	
}
void BloodBank::addType(string type, int quantity) {
	bloodTypeQuantities.insert({ type, quantity });
}
void BloodBank::displayTypeQuantity(string type) {
	map<string, int>::iterator it = bloodTypeQuantities.find(type);
	cout << it->second << endl;
}
void BloodBank::addHospitals(int num=1){
	numOfHospitals+=num;
}
void BloodBank::addReceivers(int num = 1) {
	numOfReceivers += num;
}
void BloodBank::addDonor(int num = 1) {
	numOfDonors += num;
}