#include "DateClass.h"
void DateClass::setDate(string date)
{
	donationDate = date;
   setExpirationDate();
}
void DateClass::setDate()
{
    time_t t = time(0);
    char buffer[26];
    ctime_s(buffer, sizeof(buffer), &t);
    donationDate = buffer;
    setExpirationDate();
}
string DateClass::getDonationDate() const
{
    return donationDate;
}
string DateClass::getExpirationDate() const
{
    return expirationDate;
}
void DateClass::setExpirationDate()
{
    tm timeIn = {};
    istringstream ss(donationDate);
    ss >> get_time(&timeIn, "%Y-%m-%d");

    auto time = system_clock::from_time_t(mktime(&timeIn));
    time += hours(24 * 42);

    time_t expTime = system_clock::to_time_t(time);
    tm timeOut;
#if defined(_WIN32)
    gmtime_s(&timeOut, &expTime);
#else
    gmtime_r(&expTime, &timeOut);
#endif

    ostringstream oss;
    oss << put_time(&timeOut, "%Y-%m-%d");
    string expDate = oss.str();
    expirationDate = expDate;
}