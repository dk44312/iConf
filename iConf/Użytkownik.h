#pragma once
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
    //~U¿ytkownik();
    std::vector<jest_zaproszony> _unnamed_jest_zaproszony_;
    std::vector<Spotkanie> _zorganizowane_przez;
    //bool dodaj(int Id, std::string Login, std::string Imiê, std::string Nazwisko, std::string Nazwa, std::string Email);
    bool edytuj(int Id, std::string Login, std::string Imiê, std::string Nazwisko, std::string Nazwa, std::string Email);
    //bool usuñ(int Id);


};

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