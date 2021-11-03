#pragma once
#include <iostream>

using namespace std;

class Motor {

private:

	string combustibil;
	int numarDeCilindrii;
	float dimensiuneCilindrii;
	int rezervor;
	int putere;

public:

	//seteri si geteri

	void setCombustibil(string combustibil);
	string getCombustibil();

	void setNumarDeCilindrii(int numarDeCilindrii);
	int getNumarDeCilindrii();

	void setDimensiuneCilindrii(float dimensiuneCilindrii);
	float getDimensiuneCilindrii();

	void setRezervor(int rezervor);
	int getRezervor();

	void setPutere(int putere);
	int getPutere();

	//constructorii si destructorii	

		Motor(string combustibil, int numarDeCilindrii, float dimensiuneCilindrii, int rezervor, int putere) : combustibil{ combustibil },
			numarDeCilindrii{ numarDeCilindrii }, dimensiuneCilindrii{dimensiuneCilindrii},
							rezervor{ rezervor }, putere{putere} {}
		Motor();
		~Motor();
};

Motor::Motor() {
	this->combustibil = " ";
	this->numarDeCilindrii = 0;
	this->dimensiuneCilindrii = 0;
	this->rezervor = 0;
	this->putere = 0;
}

Motor::~Motor() {
	cout << "Destructor Motor" << endl;
}

void Motor :: setCombustibil(string combustibil) {
	this->combustibil = combustibil;
}
string Motor::getCombustibil() {
	return combustibil;
}

void Motor::setNumarDeCilindrii(int numarDeCilindrii) {
	this->numarDeCilindrii = numarDeCilindrii;
}
int Motor :: getNumarDeCilindrii() {
	return numarDeCilindrii;
}

void Motor::setDimensiuneCilindrii(float dimensiuneCilindrii) {
	this->dimensiuneCilindrii = dimensiuneCilindrii;
}
float Motor::getDimensiuneCilindrii() {
	return dimensiuneCilindrii;
 }

void Motor::setRezervor(int rezervor) {
	this->rezervor = rezervor;
 }
int Motor::getRezervor() {
	return rezervor;
}

void Motor::setPutere(int putere) {
	this->putere = putere;
 }
int Motor::getPutere() {
	return putere;
}