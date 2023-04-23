#include "Disease.h"
#include <iostream>
#include<string>
using namespace std;
Disease::Disease(string dName) {
	this->dName = dName;
}
void Disease::addFact(string fact) {
	facts.push_back(fact);
	factsCnt++;
}
void Disease::displayFacts() {
	for (int i = 0; i < facts.size(); i++) {
		cout << facts[i] << endl;
	}
}
void Disease::displayRandFact() {
	cout << facts[rand() % factsCnt];
}
	
