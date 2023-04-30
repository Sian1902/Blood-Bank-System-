#include "UserClass.h"

UserClass::UserClass()
{
	id = " ";
	gender=" ";
	bloodType = " ";
	name=" ";
	password=" ";

	time(&birthDate);
}
string UserClass::getId() const 
{ 
	return id;
}
void UserClass::setId(const string& id) 
{ 
	this->id = id;
}
string UserClass::getName() const 
{
	return name; 
}
void UserClass::setName(const string& name) 
{ 
	this->name = name;
}
string UserClass::getMail() 
{
	return email.getEmail();
}
bool UserClass::setMail(const string& Mail)
{
	return email.setEmail(Mail);

}
string UserClass::getPassword() const 
{
	return password; 
}
void UserClass::setPassword(const string& password) 
{ 
	this->password = password;
}
int UserClass::getAge()  
{
	time_t now;
	time(&now);
	double seconds = difftime(now, birthDate);
	double years = seconds / (365.25 * 24 * 60 * 60);
	return years;
}
void UserClass::setBirthDate(time_t birthDate)
{
	this->birthDate = birthDate;
}
 string UserClass::getGender() const
{
	return gender;
}
void  UserClass::setGender(string gender) 
{
	this->gender = gender;
}
string UserClass::getBloodType() const 
{
	return bloodType;
}
void UserClass::setBloodType(string bloodType)
{
	this->bloodType = bloodType;
}

time_t UserClass::getBirthDate()
{
	return birthDate;
}
