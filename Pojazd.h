#pragma once
#include <string>
#include <iostream>
#include <iomanip>
/*
    Pojazd.h
*/
class Pojazd {
    private:
        std::string typ_pojazdu;
        std::string typ_silnika;
        float zasieg;
        float predkosc_maksymalna;
        unsigned int liczba_kol;
    public:
        Pojazd();
        Pojazd(
            std::string typ_pojazdu,
            std::string typ_silnika,
            float zasieg,
            float predkosc_maksymalna,
            int liczba_kol
        );
        ~Pojazd();
        void pokazac_zawartosc();
        void pokazac_zawartosc_alternatywnie();

        std::string get_typ_pojazdu();
        std::string get_typ_silnika();
        float get_zasieg();
        float get_predkosc_maksymalna();
        int get_liczba_kol();
};