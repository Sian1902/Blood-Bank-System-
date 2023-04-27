#pragma once
#include<iostream>
#include"BloodTypes.h"
#include"EmailClass.h"
#include <regex>
using namespace std;
class UserClass
{
protected:
    string id;
    string name;
    EmailClass email;
    string password;
    int age;
    enum Gender { MALE, FEMALE } gender;
    BloodType bloodType;
public:
    UserClass();
    string getId() const;
    void setId(const string& id);
    string getName() const;
    void setName(const string& name);
    string getMail() ;
    void setMail(const string& Mail);
    string getPassword() const;
    void setPassword(const string& password);
    int getAge() const;
    void setAge(int age);
    Gender getGender() const;
    void setGender(Gender gender);
    BloodType getBloodType() const;
    void setBloodType(BloodType bloodType);
};
