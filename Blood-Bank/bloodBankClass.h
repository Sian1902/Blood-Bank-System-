#pragma once
#include<iostream>
#include<unordered_map>
#include<unordered_set>
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

	struct donor {
		time_t birthDate;
		string id;
		string name;
		string email;
		string password;
		string  gender;
		string bloodType;
		time_t lastDonationDate;

	};
	struct recipient {
		time_t birthDate;
		string id;
		string name;
		string email;
		string password;
		string  gender;
		string bloodType;
		string hospital;
		string doctorOftheCase;
	};
	struct blood {
		string hospital;
		string donorBloodType;
		time_t donationDate;
	};
	unordered_map<string, unordered_map<string ,queue<BloodClass>>> bloodDataMap;
	unordered_map<string, DonorClass> donorsDataMap;
	unordered_map<string, RecipientClass> recipientsDataMap;
	unordered_set <string> ids;

     string currEmail;
	 
	
public:
    static inline BloodBankClass *bbc;

	//BloodBankClass();
	bool Regestration(string name, string id, string email, string password, time_t birthDate, string gender, string bloodType, string Hospital, string doctorOfTheCase);;
	bool  login(string email, string password, bool isDonor);
	void deleteDonor();
	void deleteRecipient();
	int searchForBlood();
	bool requestBlood(int amount);
	bool Regestration(string name, string id, string email, string password, time_t birthDate, string gender, string bloodType,time_t dateOfLastDonation);
	void donationRequest(string hospital);
	void writeDonors(unordered_map<string, DonorClass>& donorsDataMap);
	void writeBlood(unordered_map<string, unordered_map<string, queue<BloodClass>>>& bloodDataMap);
	void writeRecipients(unordered_map<string, RecipientClass>& recipientsDataMap);
	void readDonors(unordered_map<string, DonorClass>& donorsDataMap);
	void readBlood(unordered_map<string, unordered_map<string, queue<BloodClass>>>& bloodDataMap);
	void readRecipients(unordered_map<string, RecipientClass>& recipientsDataMap);
    RecipientClass& getRecipient();
    DonorClass& getDonor();
    queue<BloodClass> getBloodData();
	BloodBankClass();
	~BloodBankClass();
};
