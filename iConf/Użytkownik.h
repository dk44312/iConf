#pragma once
#include "jest_zaproszony.h"
#include "Spotkanie.h"

class U¿ytkownik
{
private:
    int _id;
    std::string _login;
    std::string _imiê;
    std::string _nazwisko;
    std::string _nazwa;
    std::string _email;
protected:
    std::string _has³o;
public:
    U¿ytkownik(int Id, std::string Login, std::string Imiê, std::string Nazwisko, std::string Nazwa, std::string Email);
    U¿ytkownik();//empty test constructor
    //~U¿ytkownik();
    std::vector<jest_zaproszony> _unnamed_jest_zaproszony_;
    std::vector<Spotkanie> _zorganizowane_przez;
    //bool dodaj(int Id, std::string Login, std::string Imiê, std::string Nazwisko, std::string Nazwa, std::string Email);
    bool edytuj(int Id, std::string Login, std::string Imiê, std::string Nazwisko, std::string Nazwa, std::string Email);
    //bool usuñ(int Id);

    int get_id() { return _id; }
    std::string get_login() { return _login; }
    std::string get_imiê() { return _imiê; }
    std::string get_nazwisko() { return _nazwisko; }
    std::string get_nazwa() { return _nazwa; }
    std::string get_email() { return _email; }
    std::string get_has³o() { return _has³o; }

    void set_id(int id) { _id=id; }
    void set_login(std::string login) { _login=login; }
    void set_imiê(std::string imiê) { _imiê=imiê; }
    void set_nazwisko(std::string nazwisko) { _nazwisko=nazwisko; }
    void set_nazwa(std::string nazwa) { _nazwa=nazwa; }
    void set_email(std::string email) { _email=email; }
    void set_has³o(std::string has³o) { _has³o=has³o; }
};

U¿ytkownik::U¿ytkownik(){}//empty test constructor
U¿ytkownik::U¿ytkownik(int Id, std::string Login, std::string Imiê, std::string Nazwisko, std::string Nazwa, std::string Email) {
    this->_id = Id;
    this->_login = Login;
    this->_imiê = Imiê;
    this->_nazwisko = Nazwisko;
    this->_nazwa = Nazwa;
    this->_email = Email;
    for(int i=0;i<20;i++)
        this->_has³o+=(char)(rand() % 126 + 33);

    std::cout << this->_has³o;
}