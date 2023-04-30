#pragma once
#include"UserClass.h"
class RecipientClass:public UserClass
{
	string hospital;
	string doctorOftheCase;
public:
	RecipientClass();
	string getHospital() ;
	void setHospital( string hospital);
	string getDoctorOftheCase();
	void setDoctorOftheCase( string doctorOftheCase);
};