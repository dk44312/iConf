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
    Użytkownik _unnamed_Użytkownik_;
    bool dodaj(int Id, int Id_spotkania, int Id_użytkownika, std::string Rola, std::time_t Data, std::time_t Godzina);
    bool usuń(int Id);
    void setUnnamed_Spotkanie_(class Spotkanie* Unnamed_Spotkanie_);
    class Spotkanie* getUnnamed_Spotkanie_();
    void setUnnamed_Użytkownik_(class Użytkownik* Unnamed_Użytkownik_);
    class Użytkownik* getUnnamed_Użytkownik_();
};
