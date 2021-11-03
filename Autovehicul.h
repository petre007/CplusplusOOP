#pragma once
#include <iostream>
#include <string>
#include "Parametrii.h"
#include "Motor.h"

using namespace std;

class Autovehicul : public Parametrii {

	private:
		
		int lungime;
		int latime;
		int masa;

	public:

		//compozitia
	
		Motor motor;
		
		//seteri si geteri

		void setLungime(int lungime);
		int getLungime();

		void setLatime(int latime);
		int getLatime();

		void setMasa(int masa);
		int getMasa();

		//constructori si destructori

		Autovehicul();
		Autovehicul(int lungime, int latime, int masa, string combustibil, int numarDeCilindrii, float dimensiuneCilindrii, int rezervor, int putere);
		 ~Autovehicul();
		
		//metodele virtuale
		
		virtual void accelerare(float valViteza) override;
		virtual void radio(string muzica) override;
		virtual void decelerare(float ValViteza) override;

};

Autovehicul::Autovehicul() {
	this->lungime = 0;
	this->latime = 0;
	this->masa = 0;
	this->motor.setCombustibil(" ");
	this->motor.setNumarDeCilindrii(0);
	this->motor.setDimensiuneCilindrii(0);
	this->motor.setRezervor(0);
	this->motor.setPutere(0);
}
Autovehicul::Autovehicul(int lungime, int latime, int masa, string combustibil, int numarDeCilindrii, float dimensiuneCilindrii, int rezervor, int putere) {
	this->lungime = lungime;
	this->latime = latime;
	this->masa = masa;
	this->motor.setCombustibil(combustibil);
	this->motor.setNumarDeCilindrii(numarDeCilindrii);
	this->motor.setDimensiuneCilindrii(dimensiuneCilindrii);
	this->motor.setRezervor(rezervor);
	this->motor.setPutere(putere);
}
Autovehicul::~Autovehicul() {
	cout << "Destructor Autovehicul" << endl;
}
void Autovehicul::setLungime(int lungime) {
	this->lungime = lungime;
}
int Autovehicul::getLungime() {
	return lungime;
}

void Autovehicul::setLatime(int latime) {
	this->latime = latime;
}
int Autovehicul::getLatime() {
	return latime;
}

void Autovehicul::setMasa(int masa) {
	this->masa = masa;
}
int Autovehicul::getMasa() {
	return masa;
}


/////////////////////////////////////////////////////////////

void Autovehicul::accelerare(float valViteza)  {
	cout << "Autovehicul accelerare " << endl;
}
void Autovehicul::radio(string muzica) {
	cout << "Autovehicul radio " << endl;
}
void Autovehicul:: decelerare(float ValViteza) {
	cout << "Autovehicul decelerare " << endl;
}