#include "RecipientClass.h"
string RecipientClass::getHospital() const 
{
	return hospital;
}
void RecipientClass::setHospital(const string& hospital) 
{
	this->hospital = hospital;
}
string RecipientClass::getDoctorOftheCase() const 
{
	return doctorOftheCase; 
}
void RecipientClass::setDoctorOftheCase(const string& doctorOftheCase) 
{ 
	this->doctorOftheCase = doctorOftheCase;
}