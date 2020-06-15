#pragma once
#include "Pokoj.h"
class Obszar
{
private:
    int _id;
    std::string _nazwa;
    std::string _lokalizacja;
    std::string _grafika;
public:
    Obszar(int Id, std::string Nazwa, std::string Lokalizacja, std::string Grafika) {
        this->_id = Id;
        this->_nazwa = Nazwa;
        this->_lokalizacja = Lokalizacja;
        this->_grafika = Grafika;
    };
    void edytuj(int Id, std::string Nazwa, std::string Lokalizacja, std::string Grafika) {
        this->_id = Id;
        this->_nazwa = Nazwa;
        this->_lokalizacja = Lokalizacja;
        this->_grafika = Grafika;
    };
    ~Obszar() {
    };
    //getters
    int get_id() { return _id; }
    std::string get_nazwa() { return _nazwa; }
    std::string get_lokalizacja() { return _lokalizacja; }
    std::string get_grafika() { return _grafika; }    
    //setters
    void set_id(int id) { _id = id; }
    void set_nazwa(std::string nazwa) { _nazwa = nazwa; }
    void set_lokalizacja(std::string lokalizacja) { _lokalizacja = lokalizacja; }
    void set_grafika(std::string grafika) { _grafika = grafika; }
};

