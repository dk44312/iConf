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
};
