#pragma once
class Spotkanie
{
private:
    int _id;
    std::string _nazwa;
    std::time_t _data_rozpocz�cia;
    std::time_t _godzina_rozpocz�cia;
    std::time_t _data_zako�czenia;
    std::time_t _godzina_zako�czenia;
    std::string _opis;
    std::string _status;
public:
    std::vector<class Pok�j*> _odbywa_si�_w;
    std::vector<class jest_zaproszony*> _unnamed_jest_zaproszony_;
    class U�ytkownik* _zorganizowane_przez;
    bool dodaj(int Id, std::string Nazwa, std::time_t Data_rozpocz�cia, std::time_t Godzina_rozpocz�cia, std::time_t Data_zako�czenia, std::time_t Godzina_zako�czenia, std::string Opis, std::string Status);
    bool edytuj(int Id, std::string Nazwa, std::time_t Data_rozpocz�cia, std::time_t Godzina_rozpocz�cia, std::time_t Data_zako�czenia, std::time_t Godzina_zako�czenia, std::string Opis, std::string Status);
    bool usu�(int Id);
    bool zmie�_status(int Id, std::string Status);

    int get_id() { return _id; }
    std::string get_nazwa() { return _nazwa; }
    std::time_t get_data_rozpocz�cia() { return _data_rozpocz�cia; }
    std::time_t get_godzina_rozpocz�cia() { return _godzina_rozpocz�cia; }
    std::time_t get_data_zako�czenia() { return _data_zako�czenia; }
    std::time_t get_godzina_zako�czenia() { return _godzina_zako�czenia; }
    std::string get_opis() { return _opis; }
    std::string get_status() { return _status; }

    void set_id(int id) { _id=id; }
    void set_nazwa(std::string nazwa) { _nazwa=nazwa; }
    void set_data_rozpocz�cia(std::time_t data_rozpocz�cia) { _data_rozpocz�cia=data_rozpocz�cia; }
    void set_godzina_rozpocz�cia(std::time_t godzina_rozpocz�cia) { _godzina_rozpocz�cia=godzina_rozpocz�cia; }
    void set_data_zako�czenia(std::time_t data_zako�czenia) { _data_zako�czenia=data_zako�czenia; }
    void set_godzina_zako�czenia(std::time_t godzina_rozpocz�cia) { _godzina_zako�czenia=godzina_rozpocz�cia; }
    void set_opis(std::string opis) { _opis=opis; }
    void set_status(std::string status) { _status=status; }
};
