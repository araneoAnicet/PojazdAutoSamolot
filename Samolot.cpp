#include "Samolot.h"
/*
    Samolot.cpp
*/

Samolot::Samolot() {
    std::cout << "Konstruktor domyslny klasy Samolot zostal wywolany" << std::endl;
}

Samolot::Samolot(
    std::string typ,
    float predkosc_wspinania,
    std::string producent,
    float x,
    float y,
    float z,
    std::string typ_pojazdu,
    std::string typ_silnika,
    float zasieg,
    float predkosc_maksymalna,
    int liczba_kol
    ): Pojazd(
            typ_pojazdu,
            typ_silnika,
            zasieg,
            predkosc_maksymalna,
            liczba_kol
        ) {
    std::cout << "Konstruktor parametryczny klasy Samolot zostal wywolany" << std::endl;
    this->typ = typ;
    this->predkosc_wspinania = predkosc_wspinania;
    this->producent = producent;
    this->wspolrzedne.x = x;
    this->wspolrzedne.y = y;
    this->wspolrzedne.z = z;
}

Samolot::~Samolot() {
    std::cout << "Destruktor klasy Samolot zostal wywolany" << std::endl;
}

void Samolot::pokazac_zawartosc() {
    std::cout << "Typ: " << this->typ << std::endl;
    std::cout << "Predkosc wspinania: " << this->predkosc_wspinania << std::endl;
    std::cout << "Producent: " << this->producent << std::endl;
}

void Samolot::przechwycenie(Samolot samolot, float dystans) {
    if (samolot.get_predkosc_maksymalna() >= this->get_predkosc_maksymalna()) {
        std::cout << "Przechwycenia nie odbedzie sie" << std::endl;
        return;
    }
    float predkosc_zblizenia = this->get_predkosc_maksymalna() - samolot.get_predkosc_maksymalna();
    float czas_zblizenia = dystans / predkosc_zblizenia;
    std::cout << "Czas przechwycenia: " << czas_zblizenia << std::endl;
}

void Samolot::przechwycenie(Samolot samolot) {
    float x1 = samolot.wspolrzedne.x;
    float y1 = samolot.wspolrzedne.y;
    float z1 = samolot.wspolrzedne.z;
    float x2 = this->wspolrzedne.x;
    float y2 = this->wspolrzedne.y;
    float z2 = this->wspolrzedne.z;
    float dystans = static_cast<float>(sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2)));
    this->przechwycenie(samolot, dystans);
}