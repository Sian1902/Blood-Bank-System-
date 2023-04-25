#pragma once
#include"bloodTypes.h"
#include <chrono>
#include<iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include"dateClass.h"
using namespace std;
using namespace std::chrono;
class bloodClass
{
	int quantity;
	bloodType donorBloodType;
	dateClass donationDateDetails;
public:
	bloodClass();
	void setQuantity(int);
	int getQuantity() const;
	void setdonorBloodType(bloodType);
	bloodType getdonorBloodType() const;

};
