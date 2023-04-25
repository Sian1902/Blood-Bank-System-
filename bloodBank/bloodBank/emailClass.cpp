#include "emailClass.h"
emailClass::emailClass() {
    userEmail = "xx@gmail.com";
}
string emailClass::getEmail()
{
    return userEmail;
}
void emailClass::setEmail()
{
    cout << "please enter your email" << endl;
    string email;
    cin >> email;
    if (regex_match(email, email_regex)) {
        userEmail = email;
    }
    else {
        cout << "Invalid email address" << endl;
        setEmail();
    }
}