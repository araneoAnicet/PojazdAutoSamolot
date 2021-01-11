#include "Auto.h"
/*
    Auto.cpp
*/

Auto::Auto() {
    std::cout << "Konstruktor domyslny klasy Auto zostal wywolany" << std::endl;
}

Auto::Auto(
        std::string marka,
        std::string model,
        std::string kolor,
        unsigned int rok_produkcji,
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
        std::cout << "Konstruktor parametryczny klasy Auto zostal wywolany" << std::endl;
        this->marka = marka;
        this->model = model;
        this->kolor = kolor;
        this->rok_produkcji = rok_produkcji;
}

Auto::~Auto() {
    std::cout << "Destruktor klasy Auto zostal wywolany" << std::endl;
}

void Auto::pokazac_zawartosc() {
    std::cout << "Marka: " << this->marka << std::endl;
    std::cout << "Model: " << this->model << std::endl;
    std::cout << "Kolor: " << this->kolor << std::endl;
    std::cout << "Rok produkcji: " << this->rok_produkcji << std::endl;
    Pojazd::pokazac_zawartosc();
}