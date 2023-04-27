#pragma once
#include"BloodTypes.h"
#include <ctime>
#include <time.h>
#include<iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;
class BloodClass
{
	BloodType donorBloodType;
	time_t donationDate;
	time_t expirationDate;
public:
	BloodClass();
	void setdonorBloodType(BloodType);
	BloodType getdonorBloodType() const;
<<<<<<< HEAD

=======
	time_t getDonationDate() const;
	void setDate(time_t donationDate);
	void setDate();
>>>>>>> Osama
};
