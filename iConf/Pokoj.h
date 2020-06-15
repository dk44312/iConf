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
    int _obszar_id;
public:
    Pokoj(int Id, std::string Nazwa, float Powierzchnia, std::string Grafika) {
        this->_id = Id;
        this->_nazwa = Nazwa;
        this->_powierzchnia = Powierzchnia;
        this->_grafika = Grafika;
    };
    void edytuj(int Id, std::string Nazwa, float Powierzchnia, std::string Grafika) {
        this->_id = Id;
        this->_nazwa = Nazwa;
        this->_powierzchnia = Powierzchnia;
        this->_grafika = Grafika;
    };
    ~Pokoj() {
    };
    void dodaj_do_obszaru(int Id_obszaru) {
        this->_obszar_id = Id_obszaru;
    };
    void usun_z_obszaru() {
        this->_obszar_id = NULL;
    };
    //getters
    int get_id() { return _id; }
    std::string get_nazwa() { return _nazwa; }
    float get_powierzchnia() { return _powierzchnia; }
    std::string get_grafika() { return _grafika; }
    //setters
    void set_id(int id) { _id = id; }
    void set_nazwa(std::string nazwa) { _nazwa = nazwa; }
    void set_powierzchnia(float powierzchnia) { _powierzchnia = powierzchnia; }
    void set_grafika(std::string grafika) { _grafika = grafika; }
};