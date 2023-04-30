#include "RecipientClass.h"
RecipientClass::RecipientClass()
{
	hospital="gfgf";
	doctorOftheCase = " ";
}
string RecipientClass::getHospital()
{
	return hospital;
}
void RecipientClass::setHospital( string hospital) 
{
	this->hospital = hospital;
}
string RecipientClass::getDoctorOftheCase()  
{
	return doctorOftheCase; 
}
void RecipientClass::setDoctorOftheCase( string doctorOftheCase) 
{ 
	this->doctorOftheCase = doctorOftheCase;
}