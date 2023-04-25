#pragma once
#include"BloodTypes.h"
#include <chrono>
#include<iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include"DateClass.h"
using namespace std;
using namespace std::chrono;
class BloodClass
{
	int quantity;
	BloodType donorBloodType;
	DateClass donationDateDetails;
public:
	BloodClass();
	void setQuantity(int);
	int getQuantity() const;
	void setdonorBloodType(BloodType);
	BloodType getdonorBloodType() const;
	
};

