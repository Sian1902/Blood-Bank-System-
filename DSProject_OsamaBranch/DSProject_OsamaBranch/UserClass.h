#pragma once
#include<iostream>
#include"BloodTypes.h"
#include"EmailClass.h"
#include <regex>
using namespace std;
class UserClass
{
protected:
    char id[14];
    string name;
    EmailClass email;
    string password;
    int age;
    enum Gender { MALE, FEMALE } gender;
    BloodType bloodType;
public:
    UserClass();
    virtual void deleteAccount() = 0;
    virtual void updateInfo() = 0;
    virtual void logIn() = 0;
    virtual void regestiration() = 0;



};

