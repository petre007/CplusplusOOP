#pragma once
#include <iostream>
#include "Nissan.h"
#include "Autovehicul.h"
#include "Masina.h"
#include "Parametrii.h"
#include "Motor.h"

using namespace std;

class Customizari{
	
	friend class Nissan;
	friend class Masina;
	friend class Autovehicul;
	friend class Parametrii;
	private:

		string bodykit;
		string roata;
		int dimensiuneRoata=0;
		string spoiler;
		string culoareNeon;
		

	public:

		//seteri si geteri

		void setBodykit(string bodykit);
		string getBodykit();

		void setRoata(string roata);
		string getRoata();

		void setDimensiuneRoata(int dimensiuneRoata);
		int getDimensiuneRoata();

		void setSpoiler(string spoiler);
		string getSpoiler();

		void setCuloareNeon(string culoareNeon);
		string getCuloareNeon();

		
};



void Customizari::setBodykit(string bodykit) {
	this->bodykit = bodykit;
}
string Customizari::getBodykit() {
	return bodykit;
}

void Customizari :: setRoata(string roata) {
	this->roata = roata;
}
string Customizari::getRoata() {
	return roata;
}

void Customizari::setDimensiuneRoata(int dimensiuneRoata) {
	this->dimensiuneRoata = dimensiuneRoata;
}
int Customizari::getDimensiuneRoata() {
	return dimensiuneRoata;
}

void Customizari::setSpoiler(string spoiler) {
	this->spoiler = spoiler;
}
string Customizari::getSpoiler() {
	return spoiler;
}

void Customizari::setCuloareNeon(string culoareNeon) {
	this->culoareNeon = culoareNeon;
}
string Customizari::getCuloareNeon() {
	return culoareNeon;
}
