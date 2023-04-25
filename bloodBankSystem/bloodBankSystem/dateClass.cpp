#include "dateClass.h"
void dateClass::setDate(string date)
{
    donationDate = date;
    setExpirationDate();
}
void dateClass::setDate()
{
    time_t t = time(0);
    char buffer[26];
    ctime_s(buffer, sizeof(buffer), &t);
    donationDate = buffer;
    setExpirationDate();
}
string dateClass::getDonationDate() const
{
    return donationDate;
}
string dateClass::getExpirationDate() const
{
    return expirationDate;
}
void dateClass::setExpirationDate()
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