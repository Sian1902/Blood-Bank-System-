#include "EmailClass.h"
EmailClass::EmailClass() {
	userEmail = "xx@gmail.com";
}
string EmailClass::getEmail()
{
	return userEmail;
}
void EmailClass::setEmail()
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
