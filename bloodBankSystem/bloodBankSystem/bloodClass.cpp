#include "BloodClass.h"
BloodClass::BloodClass()
{
	donorBloodType = BloodType::O_POSITIVE;
}
void BloodClass::setdonorBloodType(BloodType bloodtype)
{
	donorBloodType = bloodtype;
}
BloodType BloodClass::getdonorBloodType() const
{
	return donorBloodType;
}
time_t BloodClass::getDonationDate() const 
{
	return donationDate;
}
void BloodClass::setDate(time_t donationDate)
{
	this->donationDate = donationDate; 
	expirationDate = donationDate + (42 * 24 * 60 * 60);
}
void BloodClass::setDate()
{ 
	time(&donationDate);
	expirationDate = donationDate + (42 * 24 * 60 * 60);
}