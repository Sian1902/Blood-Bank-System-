#include "BloodClass.h"
BloodClass::BloodClass()
{
	donorBloodType = "";
	time(&donationDate);
	
}
void BloodClass::setdonorBloodType(string bloodtype)
{
	donorBloodType = bloodtype;
}
string BloodClass::getdonorBloodType() const
{
	return donorBloodType;
}
time_t BloodClass::getDonationDate() const 
{
	return donationDate;
}
time_t BloodClass::getExpirationDate() const
{
	return (donationDate + (42 * 24 * 60 * 60));
}
void BloodClass::setDate()
{ 
	time(&donationDate);
}