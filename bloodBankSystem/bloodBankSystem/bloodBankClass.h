#pragma once
#include<iostream>
#include<unordered_map>
#include <string>
#include <queue>
#include"BloodTypes.h"
#include"BloodClass.h"
#include"UserClass.h"
#include"DonorClass.h"
#include"RecipientClass.h"
#include"BloodClass.h"
using namespace std;
class BloodBankClass
{
	
	unordered_map<string, queue<BloodClass>> bloodDataMap;
	unordered_map<string, DonorClass> donorsDataMap;
	unordered_map<string, RecipientClass> recipientsDataMap;
	//static int numOfHospitals;
public:
	string currEmail;
	//BloodBankClass();
	bool Regestration(string name, string id, string email, string password, time_t birthDate, string gender, string bloodType, string Hospital, string doctorOfTheCase);;
	bool  login(string email, string password, bool isDonor);
	void deleteDonor();
	void deleteRecipient();
	int searchForBlood();
	bool requestBlood(int amount);
	//show blood data
	bool Regestration(string name, string id, string email, string password, time_t birthDate, string gender, string bloodType,time_t dateOfLastDonation);
	void donationRequest();
};
