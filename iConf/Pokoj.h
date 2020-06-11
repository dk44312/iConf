#pragma once
#include "Obszar.h"
#include "Wyposazenie.h"
#include "Spotkanie.h"

class Pokoj
{
private:
    int _id;
    std::string _nazwa;
    float _powierzchnia;
    std::string _grafika;
    //Obszar _nalezy_do;
public:
    std::vector<class Wyposazenie*> _posiada;
    std::vector<class Spotkanie*> _odbywa_sie_w;
    bool dodaj(int Id, std::string Nazwa, float Powierzchnia, std::string Grafika);
    bool edytuj(int Id, std::string Nazwa, float Powierzchnia, std::string Grafika);
    bool usun(int Id);
    bool dodaj_do_obszaru(int Id_pokoju, int Id_obszaru);
    bool usun_z_obszaru(int Id);

    int get_id() { return _id; }
    std::string get_nazwa() { return _nazwa; }
    float get_powierzchnia() { return _powierzchnia; }
    std::string get_grafika() { return _grafika; }
   // Obszar get_nalezy_do() { return _nalezy_do; }

    void set_id(int id) { _id = id; }
    void set_nazwa(std::string nazwa) { _nazwa = nazwa; }
    void set_powierzchnia(float powierzchnia) { _powierzchnia = powierzchnia; }
    void set_grafika(std::string grafika) { _grafika = grafika; }
   // void set_nalezy_do(Obszar nalezy_do) { _nalezy_do = nalezy_do; }

};