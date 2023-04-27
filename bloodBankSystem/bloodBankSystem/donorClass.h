#pragma once
#include"UserClass.h"
#include<ctime>
class DonorClass : public UserClass
{
	
	time_t lastDonationDate;
public:
	time_t getLastDonationDate() const;
	void setLastDonationDate(time_t lastDonationDate);
};

