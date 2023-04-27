#include "BloodBankClass.h"
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
