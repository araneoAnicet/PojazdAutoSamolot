#pragma once
#include "Pojazd.h"
#include <string>
#include <iostream>
#include <math.h>
/*
    Samolot.h
*/

class Samolot: public Pojazd {
    private:
        struct Wspolrzedne {
            float x;
            float y;
            float z;
        };
        Wspolrzedne wspolrzedne;
        std::string typ;
        float predkosc_wspinania;
        std::string producent;
    public:
        Samolot();
        Samolot(
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
        );
        ~Samolot();
        void pokazac_zawartosc();
        void przechwycenie(Samolot samolot, float dystans);  // ze wzgledu na dystans
        void przechwycenie(Samolot samolot);  // ze wzgledu na wspolrzedne
};
