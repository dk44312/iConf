#pragma once
#include "Obszar.h"

class Pok�j
{
private:
    int _id;
    std::string _nazwa;
    float _powierzchnia;
    std::string _grafika;
    Obszar _nale�y_do;
public:
    std::vector<class Wyposa�enie*> _posiada;
    std::vector<class Spotkanie*> _odbywa_si�_w;
    bool dodaj(int Id, std::string Nazwa, float Powierzchnia, std::string Grafika);
    bool edytuj(int Id, std::string Nazwa, float Powierzchnia, std::string Grafika);
    bool usu�(int Id);
    bool dodaj_do_obszaru(int Id_pokoju, int Id_obszaru);
    bool usu�_z_obszaru(int Id);

    int get_id() { return _id; }
};