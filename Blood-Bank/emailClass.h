#pragma once
#include<iostream>
#include"BloodTypes.h"
#include <regex>
#include<string>
using namespace std;
class EmailClass
{
	string userEmail;
	const regex email_regex{ R"([\w-]+(?:\.[\w-]+)*@(?:[\w-]+\.)+[a-zA-Z]{1,7})" };
public:
	EmailClass();
	bool setEmail(const string&email);
	string getEmail();
};
