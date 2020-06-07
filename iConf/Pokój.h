#pragma once
#include "Obszar.h"

class Pokój
{
private:
    int _id;
    std::string _nazwa;
    float _powierzchnia;
    std::string _grafika;
    Obszar _nale¿y_do;
public:
    std::vector<class Wyposa¿enie*> _posiada;
    std::vector<class Spotkanie*> _odbywa_siê_w;
    bool dodaj(int Id, std::string Nazwa, float Powierzchnia, std::string Grafika);
    bool edytuj(int Id, std::string Nazwa, float Powierzchnia, std::string Grafika);
    bool usuñ(int Id);
    bool dodaj_do_obszaru(int Id_pokoju, int Id_obszaru);
    bool usuñ_z_obszaru(int Id);

    int get_id() { return _id; }
};