#pragma once
#include<iostream>
#include<unordered_map>
#include <string>
#include <vector>
#include"bloodTypes.h"
#include"bloodClass.h"
#include"userClass.h"
#include"donorClass.h"
#include "recipeintClass.h"
#include"bloodClass.h"
#include"dateClass.h"
using namespace std;
class bloodBankClass
{
public:
	static unordered_map<bloodType, vector<bloodClass>> bloodDataMap;
	static int totalBlood;
	static unordered_map<string, donorClass> donorsDataMap;
	static int numOfDonors;
	static unordered_map<string, recipientClass> recipientsDataMap;
	static int numOfReceivers;
	static int numOfHospitals;
	bloodBankClass()
	{
		totalBlood = 0;
		numOfDonors = 0;
		numOfReceivers = 0;
		numOfHospitals = 0;
	}

};
