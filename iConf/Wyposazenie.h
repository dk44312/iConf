#pragma once
#include "Pokoj.h"

class Wyposazenie
{
private:
    int _id;
    std::string _nazwa;
    int _ilosc;
    std::string _opis;
public:
    Pokoj* _posiada;
    bool dodaj(int Id, std::string Nazwa, int Ilosc, std::string Opis);
    bool usun(int Id);
    bool dodaj_do_pokoju(int Id_wyposazenia, int Id_pokoju);
    bool usun_z_pokoju(int Id);

    int get_id() { return _id; }
    std::string get_nazwa() { return _nazwa; }
    int get_ilosc() { return _ilosc; }
    std::string get_opis() { return _opis; }

    void set_id(int id) { _id = id; }
    void set_nazwa(std::string nazwa) { _nazwa = nazwa; }
    void set_ilosc(int ilosc) { _ilosc = ilosc; }
    void set_opis(std::string opis) { _opis = opis; }
};
