#include "UserClass.h"

UserClass::UserClass() : age(0), gender(Gender::MALE), bloodType(BloodType::O_POSITIVE), name(0), password(0),id(0){}
string UserClass::getId() const { return id; }
void UserClass::setId(const string& id) { this->id = id; }
string UserClass::getName() const { return name; }
void UserClass::setName(const string& name) { this->name = name; }
string UserClass::getMail()  { return email.getEmail(); }
void UserClass::setMail(const string& Mail){ email.setEmail(Mail); }
string UserClass::getPassword() const { return password; }
void UserClass::setPassword(const string& password) { this->password = password; }
int UserClass::getAge() const { return age; }
void UserClass::setAge(int age) { this->age = age; }
UserClass::Gender  UserClass::getGender() const { return gender; }
void  UserClass::setGender(UserClass::Gender gender) { this->gender = gender; }
BloodType UserClass::getBloodType() const { return bloodType; }
void UserClass::setBloodType(BloodType bloodType) { this->bloodType = bloodType; }