#pragma once
class jest_zaproszony
{
private:
    int _id;
    std::string _rola;
    std::time_t _data;
    std::time_t _godzina;

public:
    class Spotkanie _unnamed_Spotkanie_;
    U¿ytkownik _unnamed_U¿ytkownik_;
    bool dodaj(int Id, int Id_spotkania, int Id_u¿ytkownika, std::string Rola, std::time_t Data, std::time_t Godzina);
    bool usuñ(int Id);
    void setUnnamed_Spotkanie_(class Spotkanie* Unnamed_Spotkanie_);
    class Spotkanie* getUnnamed_Spotkanie_();
    void setUnnamed_U¿ytkownik_(class U¿ytkownik* Unnamed_U¿ytkownik_);
    class U¿ytkownik* getUnnamed_U¿ytkownik_();
};
