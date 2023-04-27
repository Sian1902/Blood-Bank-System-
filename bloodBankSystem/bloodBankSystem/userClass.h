#pragma once
#include<iostream>
#include"BloodTypes.h"
#include"EmailClass.h"
#include<ctime>
#include <regex>
using namespace std;
class UserClass
{
protected:
    time_t birthDate;
    string id;
    string name;
    EmailClass email;
    string password;
    string  gender;
    string bloodType;
public:
    UserClass();
    string getId() const;
    void setId(const string& id);
    string getName() const;
    void setName(const string& name);
    string getMail() ;
    bool setMail(const string& Mail);
    string getPassword() const;
    void setPassword(const string& password);
    int getAge() const;
    void setBirthDate(time_t birthDate);
    string getGender() const;
    void setGender(string gender);
    string getBloodType() const;
    void setBloodType(string bloodType);
};
