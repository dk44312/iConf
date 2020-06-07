#pragma once
class Wyposa¿enie
{
private:
    int _id;
    std::string _nazwa;
    int _iloœæ;
    std::string _opis;
public:
    Pokój* _posiada;
    bool dodaj(int Id, std::string Nazwa, int Iloœæ, std::string Opis);
    bool usuñ(int Id);
    bool dodaj_do_pokoju(int Id_wyposa¿enia, int Id_pokoju);
    bool usuñ_z_pokoju(int Id);
};
