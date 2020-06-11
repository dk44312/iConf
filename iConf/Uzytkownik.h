#pragma once
#include "jest_zaproszony.h"
#include "Spotkanie.h"

class Uzytkownik
{
private:
    int _id;
    std::string _login;
    std::string _imie;
    std::string _nazwisko;
    std::string _nazwa;
    std::string _email;
protected:
    std::string _haslo;
public:
    Uzytkownik(int Id, std::string Login, std::string Imie, std::string Nazwisko, std::string Nazwa, std::string Email);
    Uzytkownik();//empty test constructor
    //~Uzytkownik();
    std::vector<jest_zaproszony> _unnamed_jest_zaproszony_;
    std::vector<Spotkanie> _zorganizowane_przez;
    bool dodaj(int Id, std::string Login, std::string Imie, std::string Nazwisko, std::string Nazwa, std::string Email);
    bool edytuj(int Id, std::string Login, std::string Imie, std::string Nazwisko, std::string Nazwa, std::string Email);
    bool usun(int Id);

    int get_id() { return _id; }
    std::string get_login() { return _login; }
    std::string get_imie() { return _imie; }
    std::string get_nazwisko() { return _nazwisko; }
    std::string get_nazwa() { return _nazwa; }
    std::string get_email() { return _email; }
    std::string get_haslo() { return _haslo; }

    void set_id(int id) { _id=id; }
    void set_login(std::string login) { _login=login; }
    void set_imie(std::string imie) { _imie=imie; }
    void set_nazwisko(std::string nazwisko) { _nazwisko=nazwisko; }
    void set_nazwa(std::string nazwa) { _nazwa=nazwa; }
    void set_email(std::string email) { _email=email; }
    void set_haslo(std::string haslo) { _haslo=haslo; }
};

Uzytkownik::Uzytkownik(){}//empty test constructor
Uzytkownik::Uzytkownik(int Id, std::string Login, std::string Imie, std::string Nazwisko, std::string Nazwa, std::string Email) {
    this->_id = Id;
    this->_login = Login;
    this->_imie = Imie;
    this->_nazwisko = Nazwisko;
    this->_nazwa = Nazwa;
    this->_email = Email;
    for(int i=0;i<20;i++)
        this->_haslo+=(char)(rand() % 126 + 33);

    std::cout << this->_haslo;
}