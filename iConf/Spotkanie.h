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
};
