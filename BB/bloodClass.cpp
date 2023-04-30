#include "BloodClass.h"
BloodClass::BloodClass()
{
	donorBloodType = "";
	time(&donationDate);
	time(&expirationDate);
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
	return expirationDate;
}
void BloodClass::setDate()
{ 
	time(&donationDate);
	expirationDate = donationDate + (42 * 24 * 60 * 60);
}