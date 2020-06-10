#pragma once
class Spotkanie
{
private:
    int _id;
    std::string _nazwa;
    std::time_t _data_rozpoczêcia;
    std::time_t _godzina_rozpoczêcia;
    std::time_t _data_zakoñczenia;
    std::time_t _godzina_zakoñczenia;
    std::string _opis;
    std::string _status;
public:
    std::vector<class Pokój*> _odbywa_siê_w;
    std::vector<class jest_zaproszony*> _unnamed_jest_zaproszony_;
    class U¿ytkownik* _zorganizowane_przez;
    bool dodaj(int Id, std::string Nazwa, std::time_t Data_rozpoczêcia, std::time_t Godzina_rozpoczêcia, std::time_t Data_zakoñczenia, std::time_t Godzina_zakoñczenia, std::string Opis, std::string Status);
    bool edytuj(int Id, std::string Nazwa, std::time_t Data_rozpoczêcia, std::time_t Godzina_rozpoczêcia, std::time_t Data_zakoñczenia, std::time_t Godzina_zakoñczenia, std::string Opis, std::string Status);
    bool usuñ(int Id);
    bool zmieñ_status(int Id, std::string Status);

    int get_id() { return _id; }
    std::string get_nazwa() { return _nazwa; }
    std::time_t get_data_rozpoczêcia() { return _data_rozpoczêcia; }
    std::time_t get_godzina_rozpoczêcia() { return _godzina_rozpoczêcia; }
    std::time_t get_data_zakoñczenia() { return _data_zakoñczenia; }
    std::time_t get_godzina_zakoñczenia() { return _godzina_zakoñczenia; }
    std::string get_opis() { return _opis; }
    std::string get_status() { return _status; }

    void set_id(int id) { _id=id; }
    void set_nazwa(std::string nazwa) { _nazwa=nazwa; }
    void set_data_rozpoczêcia(std::time_t data_rozpoczêcia) { _data_rozpoczêcia=data_rozpoczêcia; }
    void set_godzina_rozpoczêcia(std::time_t godzina_rozpoczêcia) { _godzina_rozpoczêcia=godzina_rozpoczêcia; }
    void set_data_zakoñczenia(std::time_t data_zakoñczenia) { _data_zakoñczenia=data_zakoñczenia; }
    void set_godzina_zakoñczenia(std::time_t godzina_rozpoczêcia) { _godzina_zakoñczenia=godzina_rozpoczêcia; }
    void set_opis(std::string opis) { _opis=opis; }
    void set_status(std::string status) { _status=status; }
};
