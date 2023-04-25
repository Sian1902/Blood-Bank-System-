#pragma once
#include<iostream>
#include"bloodTypes.h"
#include"emailClass.h"
#include <regex>
using namespace std;
class userClass
{
protected:
    char id[14];
    string name;
    emailClass email;
    string password;
    int age;
    enum Gender { MALE, FEMALE } gender;
    bloodType bloodType;
public:
    userClass();
    virtual void deleteAccount() = 0;
    virtual void updateInfo() = 0;
    virtual void logIn() = 0;
    virtual void regestiration() = 0;



};
