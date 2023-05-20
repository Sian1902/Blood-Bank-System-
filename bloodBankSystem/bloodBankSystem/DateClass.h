#pragma once
#include <chrono>
#include<iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <ctime>  
using namespace std;
using namespace std::chrono;
class DateClass
{
	string donationDate;
	string expirationDate;
	void setExpirationDate();
public:
	void setDate(string);
	void setDate();
	string getDonationDate() const;
	string getExpirationDate() const;

};
