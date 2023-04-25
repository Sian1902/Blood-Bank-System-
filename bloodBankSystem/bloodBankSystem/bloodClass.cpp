#include "bloodClass.h"
bloodClass::bloodClass()
{
	quantity = 0;
	donorBloodType = bloodType::O_POSITIVE;
}
void bloodClass::setQuantity(int quan)
{
	quantity = quan;
}
int bloodClass::getQuantity() const
{
	return quantity;
}
void bloodClass::setdonorBloodType(bloodType bloodtype)
{
	donorBloodType = bloodtype;
}
bloodType bloodClass::getdonorBloodType() const
{
	return donorBloodType;
}