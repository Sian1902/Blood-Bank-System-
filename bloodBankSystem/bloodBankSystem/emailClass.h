#pragma once
#include<iostream>
#include"bloodTypes.h"
#include <regex>
#include<string>
using namespace std;
class emailClass
{
	string userEmail;
	const regex email_regex{ R"([\w-]+(?:\.[\w-]+)*@(?:[\w-]+\.)+[a-zA-Z]{1,7})" };
public:
	emailClass();
	void setEmail();
	string getEmail();
};

