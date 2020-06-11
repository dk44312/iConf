#pragma once
#include "Spotkanie.h"
#include "Uzytkownik.h"

class jest_zaproszony
{
private:
    int _id;
    std::string _rola;
    std::time_t _data;
    std::time_t _godzina;

public:
    Spotkanie _unnamed_Spotkanie_;
    Uzytkownik _unnamed_Uzytkownik_;
    bool dodaj(int Id, int Id_spotkania, int Id_uzytkownika, std::string Rola, std::time_t Data, std::time_t Godzina);
    bool usun(int Id);
    void setUnnamed_Spotkanie_(class Spotkanie* Unnamed_Spotkanie_);
    class Spotkanie* getUnnamed_Spotkanie_();
    void setUnnamed_U퓓tkownik_(class U퓓tkownik* Unnamed_U퓓tkownik_);
    class U퓓tkownik* getUnnamed_U퓓tkownik_();

    int get_id() { return _id; }
    std::string get_rola() { return _rola; }
    std::time_t get_data() { return _data; }
    std::time_t get_godzina() { return _godzina; }

    void set_id(int id) { _id = id; }
    void set_rola(std::string rola) { _rola = rola; }
    void set_data(std::time_t data) { _data = data; }
    void set_godzina(std::time_t godzina) { _godzina = godzina; }
};
