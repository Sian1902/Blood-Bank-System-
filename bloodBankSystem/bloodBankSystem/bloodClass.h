#pragma once
#include <ctime>
#include <time.h>
#include<iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;
class BloodClass
{
	string donorBloodType;
	time_t donationDate;
	time_t expirationDate;
public:
	BloodClass();
	void setdonorBloodType(string);
	string getdonorBloodType() const;
	time_t getDonationDate() const;
	time_t	getExpirationDate() const;
	void setDate();
};
