#pragma once
#include "Spotkanie.h"
#include "U¿ytkownik.h"

class jest_zaproszony
{
private:
    int _id;
    std::string _rola;
    std::time_t _data;
    std::time_t _godzina;

public:
    Spotkanie _unnamed_Spotkanie_;
    U¿ytkownik _unnamed_U¿ytkownik_;
    bool dodaj(int Id, int Id_spotkania, int Id_u¿ytkownika, std::string Rola, std::time_t Data, std::time_t Godzina);
    bool usuñ(int Id);
    void setUnnamed_Spotkanie_(class Spotkanie* Unnamed_Spotkanie_);
    class Spotkanie* getUnnamed_Spotkanie_();
    void setUnnamed_U¿ytkownik_(class U¿ytkownik* Unnamed_U¿ytkownik_);
    class U¿ytkownik* getUnnamed_U¿ytkownik_();

    int get_id() { return _id; }
    std::string get_rola() { return _rola; }
    std::time_t get_data() { return _data; }
    std::time_t get_godzina() { return _godzina; }

    void set_id(int id) { _id = id; }
    void set_rola(std::string rola) { _rola = rola; }
    void set_data(std::time_t data) { _data = data; }
    void set_godzina(std::time_t godzina) { _godzina = godzina; }
};
