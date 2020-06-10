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

    int get_id() { return _id; }
    std::string get_nazwa() { return _nazwa; }
    int get_ilo��() { return _ilo��; }
    std::string get_opis() { return _opis; }

    void set_id(int id) { _id = id; }
    void set_nazwa(std::string nazwa) { _nazwa = nazwa; }
    void set_ilo��(int ilo��) { _ilo�� = ilo��; }
    void set_opis(std::string opis) { _opis = opis; }
};
