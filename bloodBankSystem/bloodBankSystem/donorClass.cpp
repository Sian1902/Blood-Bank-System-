#include "DonorClass.h"
time_t DonorClass::getLastDonationDate() const { return lastDonationDate; }
void DonorClass::setLastDonationDate(time_t lastDonationDate) { this->lastDonationDate = lastDonationDate; }