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

    int get_id() { return _id; }
    std::string get_nazwa() { return _nazwa; }
    int get_iloœæ() { return _iloœæ; }
    std::string get_opis() { return _opis; }

    void set_id(int id) { _id = id; }
    void set_nazwa(std::string nazwa) { _nazwa = nazwa; }
    void set_iloœæ(int iloœæ) { _iloœæ = iloœæ; }
    void set_opis(std::string opis) { _opis = opis; }
};
