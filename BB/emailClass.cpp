#include "EmailClass.h"
EmailClass::EmailClass() {
    userEmail = "xx@gmail.com";
}
string EmailClass::getEmail()
{
    return userEmail;
}
bool EmailClass::setEmail(const string&email)
{
    if (regex_match(email, email_regex)) {
        userEmail = email;
        return true;
    }
    return false;
   
}