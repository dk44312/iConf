#pragma once
#include "Obszar.h"
#include "Wyposa¿enie.h"
#include "Spotkanie.h"

class Pokój
{
private:
    int _id;
    std::string _nazwa;
    float _powierzchnia;
    std::string _grafika;
    //Obszar _nale¿y_do;
public:
    std::vector<class Wyposa¿enie*> _posiada;
    std::vector<class Spotkanie*> _odbywa_siê_w;
    bool dodaj(int Id, std::string Nazwa, float Powierzchnia, std::string Grafika);
    bool edytuj(int Id, std::string Nazwa, float Powierzchnia, std::string Grafika);
    bool usuñ(int Id);
    bool dodaj_do_obszaru(int Id_pokoju, int Id_obszaru);
    bool usuñ_z_obszaru(int Id);

    int get_id() { return _id; }
    std::string get_nazwa() { return _nazwa; }
    float get_powierzchnia() { return _powierzchnia; }
    std::string get_grafika() { return _grafika; }
   // Obszar get_nale¿y_do() { return _nale¿y_do; }

    void set_id(int id) { _id = id; }
    void set_nazwa(std::string nazwa) { _nazwa = nazwa; }
    void set_powierzchnia(float powierzchnia) { _powierzchnia = powierzchnia; }
    void set_grafika(std::string grafika) { _grafika = grafika; }
   // void set_nale¿y_do(Obszar nale¿y_do) { _nale¿y_do = nale¿y_do; }

};