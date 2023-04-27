#pragma once
#include"UserClass.h"
class RecipientClass:public UserClass
{
	string hospital;
	string doctorOftheCase;
public:
	string getHospital() const;
	void setHospital(const string& hospital);
	string getDoctorOftheCase() const;
	void setDoctorOftheCase(const string& doctorOftheCase);
};