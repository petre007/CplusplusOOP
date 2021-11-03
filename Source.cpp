#include <iostream>
#include "Parametrii.h"
#include "Autovehicul.h"
#include "Masina.h"
#include "Motor.h"
#include "Nissan.h"
#include "Motocicleta.h"
#include "Customizari.h"

using namespace std;

int main() {
	
	Autovehicul* z = new Autovehicul();
	Autovehicul* v = new Motocicleta();
	Autovehicul* h = new Masina();

	z->accelerare(0);
	v->accelerare(0);
	h->accelerare(0);

	delete z;
	delete h;
	delete v;

	Motocicleta * motocicleta = new Motocicleta(2125, 785, 213, "benzina", 4, 0.7, 17, 100, "Suzuki", "GSX-S750");
	cout << "Viteza motocicletei cu care va doriti sa va deplasati: ";
	float viteza;
	cin >> viteza;
	motocicleta->accelerare(viteza);
	motocicleta->decelerare(viteza);

	delete motocicleta;
	
	Nissan* nissan = new Nissan(5, 2, 2, "benzina", 6, 5.2, 60, 568, 4, "automata", 2021, "Nissan GTR R26", "AWD");
	cout << "---------------------------------------------------" << endl;
	cout << " " << endl;

	
	float vitezaMasina;
	int a;
	cout << "Doriti sa porniti masina? 0/1 ";
	cin >> a;
	 if (a == 1) {
			nissan->pornesteMasina(true);
			nissan->aprindeFaruri(true);
			cout << "Viteaza de deplasare: ";
			cin >> vitezaMasina;
			nissan->accelerare(vitezaMasina);
			string radio;
			cout << "Melodia dorita: ";
			cin >> radio;
			nissan->radio(radio);
			nissan->decelerare(vitezaMasina);
		}
		else {
			nissan->pornesteMasina(false);
			nissan->aprindeFaruri(false);
		}
	 cout << "---------------------------------------------------" << endl;
	 cout << " " << endl;
	 Customizari j, j2, j3, j4;
		int b;
		cout << "Doriti sa modificati masina? 0/1"<<endl;
		cin >> b;
		if (b == 1) {
			int c;
			cout << "Doriti bodykit? 0/1"<<endl;
			cin >> c;
			if (c == 1)  j=nissan->adaugaBodyKit(true);
			else  j=nissan->adaugaBodyKit(false);
			int d;
			cout << "Doriti sa schimbati rotile? 0/1";
			cin >> d;
			if (d == 1) j2=nissan->customRoti(true);
			else j2=nissan->customRoti(false);
			int e;
			cout << "Doriti spoiler? 0/1";
			cin >> e;
			if (e == 1) j3=nissan->adaugaSpoiler(true);
			else j3=nissan->adaugaSpoiler(false);
			int f;
			cout << "Doriti neon? 0/1";
			cin >> f;
			if (f == 1) j4=nissan->adaugaNeon(true);
			else j4=nissan->adaugaNeon(false);
		}
		
		nissan->display(j, j2, j3, j4);

		delete nissan;

	



	return 0;
}