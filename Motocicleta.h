#pragma once
#include <iostream>
#include "Autovehicul.h"
#include "Motor.h"
#include "Parametrii.h"

using namespace std;

class Motocicleta : public Autovehicul
{
   
    private:
        
        string tipMotocicleta;
        string model;
    
    public:
        
        //seteri si geteri

        void setTipMotocicleta(string tipMotocicleta);
        string getTipMotocicleta();

        void setModel(string Model);
        string getModel();

       //constructori
        
       Motocicleta() : tipMotocicleta{ " " }, model{" "}, Autovehicul() {}

       Motocicleta(int lungime, int latime, int masa, string combustibil, int numarDeCilindrii, float dimensiuneCilindrii, int rezervor, int putere,
           string tipMotocicleta, string model);

       ~Motocicleta();

       //metodele virtuale

        virtual void accelerare(float valViteza) override;
        

        virtual void decelerare(float valViteza) override;
        

 };

Motocicleta::Motocicleta(int lungime, int latime, int masa, string combustibil, int numarDeCilindrii, float dimensiuneCilindrii, int rezervor, int putere,
    string tipMotocicleta, string model) {
    cout << "@@@@@@@@@@@@@@ Motocicleta @@@@@@@@@@@@@@" << endl;
    cout << " " << endl;
    this->setLungime(lungime);
    cout << "Lungimea motocicletei (in milimetri): " << lungime << endl;
    this->setLatime(latime);
    cout << "Latimea motocicletei (in milimetri): " << latime << endl;
    this->setMasa(masa);
    cout << "Masa motocicletei (in kilograme): " << masa << endl;
    this->motor.setCombustibil(combustibil);
    cout << "Combustibilul utilizat: " << combustibil << endl;
    this->motor.setNumarDeCilindrii(numarDeCilindrii);
    cout << "Numar de cilindrii: " << numarDeCilindrii << endl;
    this->motor.setDimensiuneCilindrii(dimensiuneCilindrii);
    cout << "Capacitatea cilindrica (in litri): " << dimensiuneCilindrii << endl;
    this->motor.setRezervor(rezervor);
    cout << "Capacitatea rezervorului (in litri): " << rezervor << endl;
    this->motor.setPutere(putere);
    cout << "Puterea dezvoltata de motor (in cai putere): " << putere << endl;
    this->tipMotocicleta = tipMotocicleta;
    cout << "Firma motocicletei: " << tipMotocicleta << endl;
    this->model = model;
    cout << "Modelul motocicletei: " << model << endl;
    cout << " " << endl;
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
}


Motocicleta::~Motocicleta() {
    cout << "Destructor Motocicleta" << endl;
}




void Motocicleta::setTipMotocicleta(string tipMotocicleta) {
    this->tipMotocicleta = tipMotocicleta;
}
string Motocicleta::getTipMotocicleta() {
    return tipMotocicleta;
}

void Motocicleta::setModel(string model){
    this->model = model;
}
string Motocicleta::getModel() {
    return model;
}

///////////////////////////////////////////////////////////

void Motocicleta::accelerare(float valViteza) {
    if (valViteza < 160) {
        cout << "Viteza initiala: " << valViteza << endl;
        cout << "Motocicleta isi creste viteza cu 25km/h" << endl;
        valViteza = valViteza + 25;
        cout << "Viteza actuala: " << valViteza << endl;
    }
    else {
        valViteza = 160;
        cout << "Viteza maxima pe care o poate atinge motocicleta este " << valViteza << endl;
    }

}


void Motocicleta::decelerare(float valViteza) {
    valViteza = 0;
    cout << "Motocicleta reduce viteza spre valoarea: " << valViteza << "km/h" << endl;

}

