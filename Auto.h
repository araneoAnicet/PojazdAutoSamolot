#pragma once
#include "Pojazd.h"
#include <string>
#include <iostream>
/*
    Auto.h
*/

class Auto: public Pojazd {
    private:
        std::string marka;
        std::string model;
        std::string kolor;
        unsigned int rok_produkcji;
    public:
        Auto();
        Auto(
            std::string marka,
            std::string model,
            std::string kolor,
            unsigned int rok_produkcji,
            std::string typ_pojazdu,
            std::string typ_silnika,
            float zasieg,
            float predkosc_maksymalna,
            int liczba_kol
        );
        ~Auto();
        void pokazac_zawartosc();
};