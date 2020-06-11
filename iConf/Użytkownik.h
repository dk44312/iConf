#pragma once
#include "jest_zaproszony.h"
#include "Spotkanie.h"

class U�ytkownik
{
private:
    int _id;
    std::string _login;
    std::string _imi�;
    std::string _nazwisko;
    std::string _nazwa;
    std::string _email;
protected:
    std::string _has�o;
public:
    U�ytkownik(int Id, std::string Login, std::string Imi�, std::string Nazwisko, std::string Nazwa, std::string Email);
    U�ytkownik();//empty test constructor
    //~U�ytkownik();
    std::vector<jest_zaproszony> _unnamed_jest_zaproszony_;
    std::vector<Spotkanie> _zorganizowane_przez;
    //bool dodaj(int Id, std::string Login, std::string Imi�, std::string Nazwisko, std::string Nazwa, std::string Email);
    bool edytuj(int Id, std::string Login, std::string Imi�, std::string Nazwisko, std::string Nazwa, std::string Email);
    //bool usu�(int Id);

    int get_id() { return _id; }
    std::string get_login() { return _login; }
    std::string get_imi�() { return _imi�; }
    std::string get_nazwisko() { return _nazwisko; }
    std::string get_nazwa() { return _nazwa; }
    std::string get_email() { return _email; }
    std::string get_has�o() { return _has�o; }

    void set_id(int id) { _id=id; }
    void set_login(std::string login) { _login=login; }
    void set_imi�(std::string imi�) { _imi�=imi�; }
    void set_nazwisko(std::string nazwisko) { _nazwisko=nazwisko; }
    void set_nazwa(std::string nazwa) { _nazwa=nazwa; }
    void set_email(std::string email) { _email=email; }
    void set_has�o(std::string has�o) { _has�o=has�o; }
};

U�ytkownik::U�ytkownik(){}//empty test constructor
U�ytkownik::U�ytkownik(int Id, std::string Login, std::string Imi�, std::string Nazwisko, std::string Nazwa, std::string Email) {
    this->_id = Id;
    this->_login = Login;
    this->_imi� = Imi�;
    this->_nazwisko = Nazwisko;
    this->_nazwa = Nazwa;
    this->_email = Email;
    for(int i=0;i<20;i++)
        this->_has�o+=(char)(rand() % 126 + 33);

    std::cout << this->_has�o;
}