#pragma once
#include "Pok�j.h"
class Obszar
{
private:
    int _id;
    std::string _nazwa;
    std::string _lokalizacja;
    std::string _grafika;
    std::vector<Pok�j> pokoje_w_obszarze;
public:
    bool dodaj(int Id, std::string Nazwa, std::string Lokalizacja, std::string Grafika);
    bool edytuj(int Id, std::string Nazwa, std::string Lokalizacja, std::string Grafika);
    bool usu�(int Id);

    int get_id() { return _id; }
    std::string get_nazwa() { return _nazwa; }
    std::string get_lokalizacja() { return _lokalizacja; }
    std::string get_grafika() { return _grafika; }
    Pok�j get_Single_pokoj(int id) {//getter which find one specific Pok�j form vector pokoje_w_obszarze
        for (int i = 0; i < pokoje_w_obszarze.size(); i++) {
            if (pokoje_w_obszarze[i].get_id() == id) {
                return pokoje_w_obszarze[i];
            }
        }
    }
    std::vector<Pok�j> get_All_pokoje() { return pokoje_w_obszarze; } //getter to get whole vector of Pok�js
    void set_id(int id) {
        _id = id;
    }
    void set_nazwa(std::string nazwa) { _nazwa = nazwa; }
    void set_lokalizacja(std::string lokalizacja) { _lokalizacja = lokalizacja; }
    void set_grafika(std::string grafika) { _grafika = grafika; }
    void set_pokoje_w_obszarze_all(std::vector<Pok�j> pokoje) { pokoje_w_obszarze = pokoje; }
    void set_pokoje_w_obszarze_dodanie(Pok�j pokoj) { pokoje_w_obszarze.push_back(pokoj); }//setter which add new Pok�j to vector pokoje_w_obszarze
    void set_pokoje_w_obszarze_edycja(Pok�j pokoj, int id) { //setter to change one object Pok�j in vector pokoje_w_obszarze
        for (int i = 0; i < pokoje_w_obszarze.size(); i++)
        {
            if (pokoje_w_obszarze[i].get_id() == id)
            {
                pokoje_w_obszarze[i] = pokoj;
            }
        }
    }

    Obszar(int id, std::string nazwa, std::string lokalizacja, std::string grafika, std::vector<Pok�j> _pokoje_w_obszarze);
    Obszar(int id, std::string nazwa, std::string lokalizacja, std::string grafika);
    Obszar();//empty test constructor

};
Obszar::Obszar()
{

}

Obszar::Obszar(int id, std::string nazwa, std::string lokalizacja, std::string grafika, std::vector<Pok�j> _pokoje_w_obszarze)
{
    this->_id = id;
    this->_nazwa = nazwa;
    this->_lokalizacja;
    this->_grafika = grafika;
    this->pokoje_w_obszarze = _pokoje_w_obszarze;
}

Obszar::Obszar(int id, std::string nazwa, std::string lokalizacja, std::string grafika)
{
    this->_id = id;
    this->_nazwa = nazwa;
    this->_lokalizacja;
    this->_grafika = grafika;
}