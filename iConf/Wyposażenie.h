#pragma once
class Wyposa�enie
{
private:
    int _id;
    std::string _nazwa;
    int _ilo��;
    std::string _opis;
public:
    Pok�j* _posiada;
    bool dodaj(int Id, std::string Nazwa, int Ilo��, std::string Opis);
    bool usu�(int Id);
    bool dodaj_do_pokoju(int Id_wyposa�enia, int Id_pokoju);
    bool usu�_z_pokoju(int Id);
};
