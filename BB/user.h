
#ifndef USER_H
#define USER_H

#pragma once
#include <iostream>
#include <string>
using namespace std;
class user
{
    string name;
    string mail;
    string password;
    string gender;
    string bloodType;
    int age;

public:
    user(string name, string mail, string password, string gender, string bloodType, int age);
    user();
    ~user();
    bool login(string email, string password);
    void updateAccount();
    void deleteAccount();
    void setName(string name);
    void setMail(string Mail);
    void setPassword(string password);
    void setGender(string gender);
    void setBloodType(string bloodType);
    void setAged(int age);
    string getName();
    string getMail();
    string getPassword();
    string getGender();
    string getBloodType();
    int getAge();
};

#endif // USER_H
