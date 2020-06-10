#pragma once
class Spotkanie
{
private:
    int _id;
    std::string _nazwa;
    std::time_t _data_rozpoczecia;
    std::time_t _godzina_rozpoczecia;
    std::time_t _data_zakonczenia;
    std::time_t _godzina_zakonczenia;
    std::string _opis;
    std::string _status;
public:
    std::vector<class Pokoj*> _odbywa_sie_w;
    std::vector<class jest_zaproszony*> _unnamed_jest_zaproszony_;
    class Uzytkownik* _zorganizowane_przez;
    bool dodaj(int Id, std::string Nazwa, std::time_t Data_rozpoczecia, std::time_t Godzina_rozpoczecia, std::time_t Data_zakonczenia, std::time_t Godzina_zakonczenia, std::string Opis, std::string Status);
    bool edytuj(int Id, std::string Nazwa, std::time_t Data_rozpoczecia, std::time_t Godzina_rozpoczecia, std::time_t Data_zakonczenia, std::time_t Godzina_zakonczenia, std::string Opis, std::string Status);
    bool usun(int Id);
    bool zmien_status(int Id, std::string Status);

    int get_id() { return _id; }
    std::string get_nazwa() { return _nazwa; }
    std::time_t get_data_rozpoczecia() { return _data_rozpoczecia; }
    std::time_t get_godzina_rozpoczecia() { return _godzina_rozpoczecia; }
    std::time_t get_data_zakonczenia() { return _data_zakonczenia; }
    std::time_t get_godzina_zakonczenia() { return _godzina_zakonczenia; }
    std::string get_opis() { return _opis; }
    std::string get_status() { return _status; }

    void set_id(int id) { _id=id; }
    void set_nazwa(std::string nazwa) { _nazwa=nazwa; }
    void set_data_rozpoczecia(std::time_t data_rozpoczecia) { _data_rozpoczecia=data_rozpoczecia; }
    void set_godzina_rozpoczecia(std::time_t godzina_rozpoczecia) { _godzina_rozpoczecia=godzina_rozpoczecia; }
    void set_data_zakonczenia(std::time_t data_zakonczenia) { _data_zakonczenia=data_zakonczenia; }
    void set_godzina_zakonczenia(std::time_t godzina_rozpoczecia) { _godzina_zakonczenia=godzina_rozpoczecia; }
    void set_opis(std::string opis) { _opis=opis; }
    void set_status(std::string status) { _status=status; }
};
