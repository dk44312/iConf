#pragma once
class Spotkanie
{
private:
    int _id;
    std::string _nazwa;
    std::string _data_rozpoczecia;
    std::string _godzina_rozpoczecia;
    std::string _data_zakonczenia;
    std::string _godzina_zakonczenia;
    std::string _opis;
    std::string _status;
    int _organizator_id;
public:
    std::vector<int> _pokoje;
    std::vector<int> _goscie;
    Spotkanie(int Id, std::string Nazwa, std::string Data_rozpoczecia, std::string Godzina_rozpoczecia, std::string Data_zakonczenia, std::string Godzina_zakonczenia, std::string Opis, std::string Status,int Organizator) {
        this->_id = Id;
        this->_nazwa = Nazwa;
        this->_data_rozpoczecia = Data_rozpoczecia;
        this->_godzina_rozpoczecia = Godzina_rozpoczecia;
        this->_data_zakonczenia = Data_zakonczenia;
        this->_godzina_zakonczenia = Godzina_zakonczenia;
        this->_opis = Opis;
        this->_status = Status;
        this->_organizator_id = Organizator;
    };
    void edytuj(int Id, std::string Nazwa, std::string Data_rozpoczecia, std::string Godzina_rozpoczecia, std::string Data_zakonczenia, std::string Godzina_zakonczenia, std::string Opis, std::string Status, int Organizator) {
        this->_id = Id;
        this->_nazwa = Nazwa;
        this->_data_rozpoczecia = Data_rozpoczecia;
        this->_godzina_rozpoczecia = Godzina_rozpoczecia;
        this->_data_zakonczenia = Data_zakonczenia;
        this->_godzina_zakonczenia = Godzina_zakonczenia;
        this->_opis = Opis;
        this->_organizator_id = Organizator;
    };
    ~Spotkanie() {
    };
    void przypisz_goscia(int Id_uzytkownika) {
        this->_goscie.push_back(Id_uzytkownika);
    };
    void przypisz_pokoj(int Id_pokoju) {
        this->_pokoje.push_back(Id_pokoju);
    };
    //getters
    int get_id() { return _id; }
    std::string get_nazwa() { return _nazwa; }
    std::string get_data_rozpoczecia() { return _data_rozpoczecia; }
    std::string get_godzina_rozpoczecia() { return _godzina_rozpoczecia; }
    std::string get_data_zakonczenia() { return _data_zakonczenia; }
    std::string get_godzina_zakonczenia() { return _godzina_zakonczenia; }
    std::string get_opis() { return _opis; }
    std::string get_status() { return _status; }
    //setters
    void set_id(int id) { _id=id; }
    void set_nazwa(std::string nazwa) { _nazwa=nazwa; }
    void set_data_rozpoczecia(std::string data_rozpoczecia) { _data_rozpoczecia=data_rozpoczecia; }
    void set_godzina_rozpoczecia(std::string godzina_rozpoczecia) { _godzina_rozpoczecia=godzina_rozpoczecia; }
    void set_data_zakonczenia(std::string data_zakonczenia) { _data_zakonczenia=data_zakonczenia; }
    void set_godzina_zakonczenia(std::string godzina_rozpoczecia) { _godzina_zakonczenia=godzina_rozpoczecia; }
    void set_opis(std::string opis) { _opis=opis; }
    void set_status(std::string status) { _status=status; }
    //shows
    void show_goscie() {
        std::cout << "Zaproszeni goscie: ";
        for (auto i = _goscie.begin(); i != _goscie.end(); ++i)
            std::cout << *i << ' ';
        std::cout << std::endl;
    };
    void show_pokoje() {
        std::cout << "Spotkanie odbywa sie w pokojach: ";
        for (auto i = _pokoje.begin(); i != _pokoje.end(); ++i)
            std::cout << *i << ' ';
        std::cout << std::endl;
    };
    void show_info() {
        std::cout << "INFORMACJE O SPOTKANIU NR " << this->_id << std::endl;
        std::cout << "Nazwa: " << this->_nazwa << std::endl;
        std::cout << "Data rozpoczecia: " << this->_data_rozpoczecia << std::endl;
        std::cout << "Godzina rozpoczecia: " << this->_godzina_rozpoczecia << std::endl;
        std::cout << "Data zakonczenia: " << this->_data_zakonczenia << std::endl;
        std::cout << "Godzina zakonczenia: " << this->_godzina_zakonczenia << std::endl;
        std::cout << "Opis: " << this->_opis << std::endl;
        std::cout << "Status: " << this->_status << std::endl;
        std::cout << "Organizator: " << this->_organizator_id << std::endl;
        show_pokoje();
        show_goscie();
    };
};
