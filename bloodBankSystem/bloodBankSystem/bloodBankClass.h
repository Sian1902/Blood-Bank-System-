#pragma once
#include<iostream>
#include<unordered_map>
#include <string>
#include <vector>
#include"BloodTypes.h"
#include"BloodClass.h"
#include"UserClass.h"
#include"DonorClass.h"
#include"RecipientClass.h"
#include"BloodClass.h"
#include"DateClass.h"
using namespace std;
class BloodBankClass
{
public:
	static unordered_map<BloodType, vector<BloodClass>> bloodDataMap;
	static int totalBlood;
	static unordered_map<string, DonorClass> donorsDataMap;
	static int numOfDonors;
	static unordered_map<string, RecipientClass> recipientsDataMap;
	static int numOfReceivers;
	static int numOfHospitals;
	BloodBankClass()
	{
		totalBlood = 0;
		numOfDonors = 0;
		numOfReceivers = 0;
		numOfHospitals = 0;
	}

};
