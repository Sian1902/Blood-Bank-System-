#include "BloodBankClass.h"
#include<iostream>
#include<vector>
#include<time.h>
#include<cstdlib>
#include <fstream>
#include<sstream>
#include<string>
using namespace std;
bool BloodBankClass::Regestration(string name, string id, string email, string password, time_t birthDate, string gender, string bloodType, string hospital, string doctorOfTheCase)
{
	RecipientClass temp;
	if (recipientsDataMap.count(email)|| !temp.setMail(email)) {
		return false;
	}
	temp.setMail(email);
	temp.setId(id);
	temp.setName(name);
	temp.setPassword(password);
	temp.setBirthDate(birthDate);
	temp.setGender(gender);
	temp.setBloodType(bloodType);
	temp.setHospital(hospital);
	temp.setDoctorOftheCase(doctorOfTheCase);
	recipientsDataMap.insert({email,temp});
	return true;
}
bool BloodBankClass::login(string email, string password, bool isDonor)
{
	if (isDonor) {
		if (donorsDataMap[email].getPassword() == password) {
			currEmail = email;
			return true;
		}
	}
	else {
		if (recipientsDataMap[email].getPassword() == password) {
			currEmail = email;
			return true;
		}
	}
	return false;
}
void BloodBankClass::deleteDonor()
{
	donorsDataMap.erase(currEmail);
}
void BloodBankClass::deleteRecipient()
{
	recipientsDataMap.erase(currEmail);
}
int BloodBankClass::searchForBlood()
{
	return bloodDataMap[recipientsDataMap[currEmail].getBloodType()].size();
}
bool BloodBankClass::requestBlood(int amount)
{
	if (amount <= searchForBlood()) {
		while (amount--) {
			bloodDataMap[recipientsDataMap[currEmail].getBloodType()].pop();
	  }
		return true;
	}
	return false;
}
bool BloodBankClass::Regestration(string name, string id, string email, string password, time_t birthDate, string gender, string bloodType, time_t dateOfLastDonation)
{
	DonorClass temp;
	if (donorsDataMap.count(email) || !temp.setMail(email)) {
		return false;
	}
	temp.setMail(email);
	temp.setId(id);
	temp.setName(name);
	temp.setPassword(password);
	temp.setBirthDate(birthDate);
	if (temp.getAge() < 18 || temp.getAge() > 60)
	{
		return false;
	}
	temp.setGender(gender);
	temp.setBloodType(bloodType);
	temp.setLastDonationDate(dateOfLastDonation);
	donorsDataMap.insert({ email,temp });
	return true;
}
void BloodBankClass::donationRequest()
{
	BloodClass donatedBlood;
	donatedBlood.setdonorBloodType(donorsDataMap[currEmail].getBloodType());
	donatedBlood.setDate();
	bloodDataMap[donatedBlood.getdonorBloodType()].push(donatedBlood);
}

void BloodBankClass::writeDonors(unordered_map<string, DonorClass>& donorsDataMap)
{
	fstream out("donorData.txt", ios::out);
	if (!out) {
		cout << "file not found";
		return;
	}
	unordered_map<string, DonorClass>::iterator it;
	for (it = donorsDataMap.begin(); it != donorsDataMap.end(); it++) {
		out << it->second.getMail() << it->second.getName() << it->second.getPassword() << it->second.getBirthDate() << it->second.getBloodType() << it->second.getGender() << it->second.getId() << it->second.getLastDonationDate()<<endl;
	}
	out.close();
}

void BloodBankClass::writeBlood(unordered_map<string, queue<BloodClass>>& bloodDataMap)
{
	fstream out("donorData.txt", ios::out);
	if (!out) {
		cout << "file not found";
		return;
	}
	unordered_map<string, queue<BloodClass>>::iterator it;
	for (it = bloodDataMap.begin(); it != bloodDataMap.end(); it++) {
		while (!it->second.empty()) {
			out << it->second.front().getDonationDate() << it->second.front().getdonorBloodType() << endl;
			it->second.pop();
		}
	}
	out.close();
}

void BloodBankClass::writeRecipients(unordered_map<string, RecipientClass>& recipientsDataMap)
{
	fstream out("recipientData.txt", ios::out);
	if (!out) {
		cout << "file not found";
		return;
	}
	unordered_map<string, RecipientClass>::iterator it;
	for (it = recipientsDataMap.begin(); it != recipientsDataMap.end(); it++) {
		out << it->second.getMail() << it->second.getName() << it->second.getPassword() << it->second.getBirthDate() << it->second.getBloodType() << it->second.getGender() << it->second.getId() << it->second.getDoctorOftheCase()<< it->second.getHospital();
	}
	out.close();
}

void BloodBankClass::readDonors(unordered_map<string,DonorClass>& donorDataMap)
{
	DonorClass temp;
	ifstream in("donorData.txt");
	if (!in) {
		cout << "file not found";
		return;
	}
	donor input;
	while ( in >> input.name) {
		in>>input.email >> input.password >> input.birthDate >> input.bloodType >> input.gender >> input.id >> input.lastDonationDate;
		temp.setMail(input.email);
		temp.setName(input.name);
		temp.setBirthDate(input.birthDate);
		temp.setBloodType(input.bloodType);
		temp.setGender(input.gender);
		temp.setId(input.id);
		temp.setLastDonationDate(input.lastDonationDate);
		temp.setPassword(input.password);
		donorsDataMap.insert({ temp.getMail(),temp});
	}

	in.close();
}

void BloodBankClass::readBlood(unordered_map<string, queue<BloodClass>>& bloodDataMap)
{
	ifstream in("recipientData.txt");
	if (!in) {
		cout << "file not found";
		return;
	}
	blood input;
	BloodClass temp;
	while (in >> input.donorBloodType) {
		in >> input.donationDate >> input.donorBloodType;
		bloodDataMap[input.donorBloodType].push(temp);
	}

}

void BloodBankClass::readRecipients(unordered_map<string, RecipientClass>& recipientsDataMap)
{
	string email;
	RecipientClass temp;
	ifstream in("recipientData.txt");
	if (!in) {
		cout << "file not found";
		return;
	}
	recipient input;
	while (in >> input.name) {
		in >> input.email >> input.password >> input.birthDate >> input.bloodType >> input.gender >> input.id >> input.doctorOftheCase>>input.hospital;
		email = input.email;
		temp.setMail(email);
		temp.setName(input.name);
		temp.setBirthDate(input.birthDate);
		temp.setBloodType(input.bloodType);
		temp.setGender(input.gender);
		temp.setId(input.id);
		temp.setPassword(input.password);
		temp.setDoctorOftheCase(input.doctorOftheCase);
		temp.setHospital(input.hospital);
		recipientsDataMap.insert({ email,temp });
	}

	in.close();
}
