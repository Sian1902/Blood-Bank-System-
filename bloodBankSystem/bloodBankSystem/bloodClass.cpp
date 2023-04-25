#include "BloodClass.h"
BloodClass::BloodClass()
{
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
void BloodClass::setdonorBloodType(BloodType bloodtype)
{
	donorBloodType = bloodtype;
}
BloodType BloodClass::getdonorBloodType() const
{
	return donorBloodType;
}
