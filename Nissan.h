#pragma once
#pragma once
#include <iostream>
#include "Masina.h"
#include "Autovehicul.h"
#include "Motor.h"
#include "Customizari.h"
#include "Parametrii.h"

using namespace std;


class Nissan :
    public Masina
{
    friend class Customizari;

private:

    int anFabricatie;
    string model;
    string tractiune;

public:
    //compozitia
    Motor motor;

    //seteri si geteri

    void setAnFabricatie(int anFabricatie);
    int getAnFabricatie();

    void setModel(string model);
    string getModel();

    void setTractiune(string tractiune);
    string getTractiune();

    //constructorii si destructorii

    Nissan();
    Nissan(int lungime, int latime, int masa, string combustibil, int numarDeCilindrii, float dimensiuneCilindrii, int rezervor, int putere,
        int numarDeLocuri, string cutieDeViteze, int anFabricatie, string model, string tractiune);
     ~Nissan();
    //metodele 

    void aprindeFaruri(bool a);
    void pornesteMasina(bool a);
    Customizari adaugaBodyKit(bool a);
    Customizari customRoti(bool a);
    Customizari adaugaSpoiler(bool a);
    Customizari adaugaNeon(bool a);
    void display(Customizari j, Customizari j2, Customizari j3, Customizari j4);

    //metodele virtuale

    virtual void accelerare(float valViteza) override;

    virtual void radio(string muzica) override;

    virtual void decelerare(float valViteza) override;
  
    

};


////////////////////////////////////////////////////////////////////////


Nissan::Nissan() {
    this->setLungime(0);
    this->setLatime(0);
    this->setMasa(0);
    this->motor.setCombustibil(" ");
    this->motor.setNumarDeCilindrii(0);
    this->motor.setDimensiuneCilindrii(0);
    this->motor.setRezervor(0);
    this->motor.setPutere(0);
    this->setNumarDeLocuri(0);
    this->setCutieDeViteze(" ");
    this->anFabricatie = 0;
    this->model = " ";
    this->tractiune = " ";

}

Nissan::Nissan(int lungime, int latime, int masa, string combustibil, int numarDeCilindrii, float dimensiuneCilindrii, int rezervor, int putere,
    int numarDeLocuri, string cutieDeViteze, int anFabricatie, string model, string tractiune) {
    cout << "@@@@@@@@@@@@@@@ NISSAN @@@@@@@@@@@@@@@@@@@" << endl;
    cout << " " << endl;
    this->setLungime(lungime);
    cout << "Lungimea Nissanului (in metri): " << lungime << endl;
    this->setLatime(latime);
    cout << "Latimea Nissanului (in metri): " << latime << endl;
    this->setMasa(masa);
    cout << "Masa Nissanului (in tone): " << masa << endl;
    this->motor.setCombustibil(combustibil);
    cout << "Combustibilul utilizat: " << combustibil << endl;
    this->motor.setNumarDeCilindrii(numarDeCilindrii);
    cout << "Numarul de cilindrii (asezati in V): " << numarDeCilindrii << endl;
    this->motor.setDimensiuneCilindrii(dimensiuneCilindrii);
    cout << "Dimensiune cilindrii (in litri): " << dimensiuneCilindrii << endl;
    this->motor.setRezervor(rezervor);
    cout << "Capacitate rezervor (in litri): " << rezervor << endl;
    this->motor.setPutere(putere);
    cout << "Cai putere dezvoltati de motor (la 5800 de turati/minut): " << putere << endl;
    this->setNumarDeLocuri(numarDeLocuri);
    cout << "Numar de locuri: " << numarDeLocuri << endl;
    this->setCutieDeViteze(cutieDeViteze);
    cout << "Cutie de viteza: " << cutieDeViteze << endl;
    this->anFabricatie = anFabricatie;
    cout << "Anul in care a fost lansat modelul: " << anFabricatie << endl;
    this->model = model;
    cout << "Modelul: " << model << endl;
    this->tractiune = tractiune;
    cout << "Tractiune: " << tractiune << endl;
    cout << "" << endl;
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
}
 Nissan:: ~Nissan() {
    cout << "Destructor Nissan" << endl;
}

 ///////////////////////////////////////////////////////

void Nissan::aprindeFaruri(bool a) {
    if (a == true) cout << "Luminile au fost aprinse"<<endl;
    else cout << "Luminile au fost stinse"<<endl;
}
void Nissan::pornesteMasina(bool a) {
    if (a == true) cout << "Motorul a fost pornit"<<endl;
    else cout << "Motorul este oprit"<<endl;
}

////////////////////////////////////////////////////////

void Nissan::setAnFabricatie(int anFabricatie) {
    this->anFabricatie = anFabricatie;
}
int Nissan::getAnFabricatie() {
    return anFabricatie;
}

void Nissan::setModel(string model) {
    this->model = model;
}
string Nissan::getModel() {
    return model;
}

void Nissan::setTractiune(string tractiune) {
    this->tractiune = tractiune;
}
string Nissan::getTractiune() {
    return tractiune;
}

//////////////////////////////////////////////////////////////////

Customizari Nissan::adaugaBodyKit(bool a) {
    Customizari h;
       if (a == true) {
       
        cout << "Adaugati bodykit: ";
        cin >> h.bodykit;
       return h;
    }
    else {
        h.bodykit=" Niciun bodykit ";
        return h;
        
    }
}
Customizari Nissan::customRoti(bool a) {
    Customizari h;
    if (a == true) {
        
        cout << "Rotile dorite: ";
        cin >> h.roata;
        cout << "Dimensiune roti: ";
        cin >> h.dimensiuneRoata;
        return h;
    }
    else {
         h.roata=" Roti stock ";
        h.dimensiuneRoata=19;
        return h;
    }
}


Customizari Nissan::adaugaSpoiler(bool a){
    Customizari h;
    if (a == true) {
        cout << "Adaugati Spoiler: ";
        cin >>h.spoiler;
        return h;
    }
    else {
       h.spoiler = " Fara spoiler ";
        return h;
    }
}
Customizari Nissan::adaugaNeon(bool a ){
    Customizari h;
    if (a == true) {
        cout << "Culoarea neonului: ";
        cin >> h.culoareNeon;
        return h;
    }
    else {
        h.culoareNeon = " Fara neon ";
        return h;
       }
}
void Nissan::display(Customizari j, Customizari j2, Customizari j3, Customizari j4) {
    cout << "%%%%%%%%% Customuri aplicate Nissan-ului %%%%%%%%%%%" << endl;
    cout << " " << endl;
    cout << "Bodykit: " << j.bodykit << endl;
    cout << " " << endl;
    cout << "Model roti: " << j2.roata << " Cu dimensiunea (in inch): " << j2.dimensiuneRoata << endl;
    cout << " " << endl;
    cout << "Spoiler: " << j3.spoiler << endl;
    cout << " " << endl;
    cout << "Neon *daca ati ales optiunea aceeasta* de culoare: " << j4.culoareNeon << endl;
    cout << " " << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}

/////////////////////////////////////////////////////////

void Nissan::accelerare(float valViteza)  {
    if (valViteza < 255) {
        cout << "Viteza Nissan-ului initiala: " << valViteza << endl;
        valViteza = valViteza + 80;
        cout << "Viteza Nissanului finala: " << valViteza << endl;
    }
    else exit;
    valViteza = 335;
    cout << "Viteza maxima pe care o poate prinde masina: " << valViteza << endl;

}

void Nissan::radio(string muzica) {
    cout << "Melodia pusa pe radioul Nissanului este: " << muzica << endl;
}

void Nissan::decelerare(float valViteza) {
    cout << "Nissanul ajunge din nou la valoarea initiala: " << valViteza << endl;
    valViteza = 0;
    cout << "Nissanul a ajuns la viteza " << valViteza << " S-a oprit." << endl;
}

