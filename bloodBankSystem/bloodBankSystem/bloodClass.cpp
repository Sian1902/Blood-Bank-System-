#include "BloodClass.h"
BloodClass::BloodClass()
{
<<<<<<< HEAD
	quantity = 0;
	donorBloodType = BloodType::O_POSITIVE;
}
void BloodClass::setQuantity(int quan)
{
	quantity = quan;
}
int BloodClass::getQuantity() const
{
	return quantity;
}
=======
	donorBloodType = BloodType::O_POSITIVE;
}
>>>>>>> Osama
void BloodClass::setdonorBloodType(BloodType bloodtype)
{
	donorBloodType = bloodtype;
}
BloodType BloodClass::getdonorBloodType() const
{
	return donorBloodType;
}
<<<<<<< HEAD
=======
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
>>>>>>> Osama
