#pragma once
#include <string>
#include <string.h>
#include<vector>
using namespace std;
class Disease
{
	 
	string dName;
	vector<string> facts;
	int factsCnt = 0;
public:
	Disease(string dName);
	void addFact(string fact);
	void displayFacts();
	void displayRandFact();

};

