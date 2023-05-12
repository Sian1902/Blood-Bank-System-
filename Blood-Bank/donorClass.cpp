#include "DonorClass.h"
time_t DonorClass::getLastDonationDate() const { return lastDonationDate; }
void DonorClass::setLastDonationDate(time_t lastDonationDate) { this->lastDonationDate = lastDonationDate; }

DonorClass::DonorClass()
{
    time(&lastDonationDate);
}

int DonorClass::getRemainingDays(){
    time_t now;
    time(&now);
    return 90-((now-lastDonationDate)/60/60/24);
}
