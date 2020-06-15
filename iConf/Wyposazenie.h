#pragma once
#include "Pokoj.h"
class Wyposazenie
{
private:
    int _id;
    std::string _nazwa;
    int _ilosc;
    std::string _opis;
    int _pokoj_id;
public:
    //methods
    Wyposazenie(int Id, std::string Nazwa, int Ilosc, std::string Opis) {
        this->_id = Id;
        this->_nazwa = Nazwa;
        this->_ilosc = Ilosc;
        this->_opis = Opis;
    };
    ~Wyposazenie() {
    };
    void dodaj_do_pokoju(int Id_pokoju) {
        this->_pokoj_id = Id_pokoju;
    };
    void usun_z_pokoju() {
        this->_pokoj_id = NULL;
    };
    //getters
    int get_id() { return _id; }
    std::string get_nazwa() { return _nazwa; }
    int get_ilosc() { return _ilosc; }
    std::string get_opis() { return _opis; }
    //setters
    void set_id(int id) { _id = id; }
    void set_nazwa(std::string nazwa) { _nazwa = nazwa; }
    void set_ilosc(int ilosc) { _ilosc = ilosc; }
    void set_opis(std::string opis) { _opis = opis; }
};
