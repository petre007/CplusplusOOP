#pragma once
#include <iostream>
#include "Autovehicul.h"
#include "Motor.h"

using namespace std;

class Masina : public Autovehicul {

	private:
		
		int numarDeLocuri;
		string cutieDeViteze;

	public:
		
		//compozitia
		
		Motor motor;
		
		//seteri si geteri

		void setNumarDeLocuri(int numarDeLocuri);
		int getNumarDeLocuri();

		void setCutieDeViteze(string cutieDeViteze);
		string getCutieDeViteze();

		//costructori si destructori

		Masina();
		Masina(int lungime, int latime, int masa, string combustibil, int numarDeCilindrii, float dimensiuneCilindrii, int rezervor, int putere,
			int numarDeLocuri, string cutieDeViteze);
		~Masina();

		//metode virtuale

		virtual void accelerare(float valViteza) override;

		virtual void radio(string muzica) override;

		virtual void decelerare(float valViteza) override;

		
};

Masina::Masina(int lungime, int latime, int masa, string combustibil, int numarDeCilindrii, float dimensiuneCilindrii, int rezervor, int putere,
	int numarDeLocuri, string cutieDeViteze) {
	this->setLungime(lungime);
	this->setLatime(latime);
	this->setMasa(masa);
	this->motor.setCombustibil(combustibil);
	this->motor.setNumarDeCilindrii(numarDeCilindrii);
	this->motor.setDimensiuneCilindrii(dimensiuneCilindrii);
	this->motor.setRezervor(rezervor);
	this->motor.setPutere(putere);
	this->numarDeLocuri = numarDeLocuri;
	this->cutieDeViteze = cutieDeViteze;
}
Masina::Masina() {
	this->setLungime(0);
	this->setLatime(0);
	this->setMasa(0);
	this->motor.setCombustibil(" ");
	this->motor.setNumarDeCilindrii(0);
	this->motor.setDimensiuneCilindrii(0);
	this->motor.setRezervor(0);
	this->motor.setPutere(0);
	numarDeLocuri = 0;
	cutieDeViteze = " ";
}
Masina::~Masina() {
	cout << "Destructor Masina" << endl;
}

////////////////////////////////////////////////////////

void Masina::setNumarDeLocuri(int numarDeLocuri){
	this->numarDeLocuri = numarDeLocuri;
}
int Masina::getNumarDeLocuri(){
	return numarDeLocuri;
}

void Masina::setCutieDeViteze(string cutieDeViteze){
	this->cutieDeViteze = cutieDeViteze;
}
string Masina::getCutieDeViteze(){
	return cutieDeViteze; 
}

///////////////////////////////////////////////////


void Masina::accelerare(float valViteza) {
	cout << "Masina accelerare" << endl;
}

void Masina::radio(string muzica) {
	cout << "Radio Masina" << endl;
}

void Masina::decelerare(float valViteza) {
	cout << "Masina decelerare" << endl;
}