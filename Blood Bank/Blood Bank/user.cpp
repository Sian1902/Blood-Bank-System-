#include "user.h"

user::user(string name, string mail, string password, string gender, string bloodType,int age)
{
	this->name = name;
	this->mail = mail;
	this->password = password;
	this->gender = gender;
	this->bloodType = bloodType;
	this->age = age;

}

user::user()
{
	mail = "";
}

user::~user()
{
	cout << name + " deleted";
}


void user::login(string email, string password)
{

}

void user::updateAccount()
{

}

void user::deleteAccount()
{

}

void user::setName(string name)
{
	this->name = name;
}

void user::setMail(string Mail)
{
	this->mail = mail;
}

void user::setPassword(string password)
{
	this->password = password;
}

void user::setGender(string gender)
{
	this->gender = gender;
}

void user::setBloodType(string bloodType)
{
	this->bloodType = bloodType;
}

void user::setAged(int age)
{
	this->bloodType;
}

string user::getName()
{
	return name;
}

string user::getMail()
{
	return mail;
}

string user::getPassword()
{
	return password;
}

string user::getGender()
{
	return gender;
}

string user::getBloodType()
{
	return bloodType;
}

int user::getAge()
{
	return age;
}
