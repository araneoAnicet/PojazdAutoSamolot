#include "Pojazd.h"
/*
    Pojazd.cpp
*/
Pojazd::Pojazd(
            std::string typ_pojazdu,
            std::string typ_silnika,
            float zasieg,
            float predkosc_maksymalna,
            int liczba_kol
        ) {
            std::cout << "Konstruktor parametryczny klasy Pojazd zostal wywolany" << std::endl;
            this->typ_pojazdu = typ_pojazdu;
            this->typ_silnika = typ_silnika;
            this->zasieg = zasieg;
            this->predkosc_maksymalna = predkosc_maksymalna;
            this->liczba_kol = liczba_kol;
}

Pojazd::Pojazd() {
    std::cout << "Konstruktor domyslny klasy Pojazd zostal wywolany" << std::endl;
}

Pojazd::~Pojazd() {
    std::cout << "Destruktor klasy Pojazd zostal wywolany" << std::endl;
}

void Pojazd::pokazac_zawartosc() {
    std::cout << "Typ pojazdu: " << this->typ_pojazdu << std::endl;
    std::cout << "Typ silnika: " << this->typ_silnika << std::endl;
    std::cout << "Zasieg: " << this->zasieg << std::endl;
    std::cout << "Predkosc maksymalna: " << this->predkosc_maksymalna << std::endl;
    std::cout << "Liczba kol: " << this->liczba_kol << std::endl;
}

void Pojazd::pokazac_zawartosc_alternatywnie() {
    const int vartosc_setw = 22;
    std::cout << std::setfill(' ');
    
    std::cout << std::setw(vartosc_setw) << "Typ pojazdu";
    std::cout << std::setw(vartosc_setw) << "Typ silnika";
    std::cout << std::setw(vartosc_setw) << "Zasieg";
    std::cout << std::setw(vartosc_setw) << "Predkosc maksymalna";
    std::cout << std::setw(vartosc_setw) << "Liczba kol";
    std::cout << std::endl;

    std::cout << std::setw(vartosc_setw) << this->typ_pojazdu;
    std::cout << std::setw(vartosc_setw) << this->typ_silnika;
    std::cout << std::setw(vartosc_setw) << this->zasieg;
    std::cout << std::setw(vartosc_setw) << this->predkosc_maksymalna;
    std::cout << std::setw(vartosc_setw) << this->liczba_kol;
    std::cout << std::endl;
}

std::string Pojazd::get_typ_pojazdu() {
    return this->typ_pojazdu;
}
std::string Pojazd::get_typ_silnika() {
    return this->typ_silnika;
}
float Pojazd::get_zasieg() {
    return this->zasieg;
}
float Pojazd::get_predkosc_maksymalna() {
    return this->predkosc_maksymalna;
}
int Pojazd::get_liczba_kol() {
    return this->liczba_kol;
}
