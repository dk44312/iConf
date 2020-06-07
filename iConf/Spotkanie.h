#pragma once
class Spotkanie
{
private:
    int _id;
    std::string _nazwa;
    std::time_t _data_rozpoczęcia;
    std::time_t _godzina_rozpoczęcia;
    std::time_t _data_zakończenia;
    std::time_t _godzina_zakończenia;
    std::string _opis;
    std::string _status;
public:
    std::vector<class Pokój*> _odbywa_się_w;
    std::vector<class jest_zaproszony*> _unnamed_jest_zaproszony_;
    class Użytkownik* _zorganizowane_przez;
    bool dodaj(int Id, std::string Nazwa, std::time_t Data_rozpoczęcia, std::time_t Godzina_rozpoczęcia, std::time_t Data_zakończenia, std::time_t Godzina_zakończenia, std::string Opis, std::string Status);
    bool edytuj(int Id, std::string Nazwa, std::time_t Data_rozpoczęcia, std::time_t Godzina_rozpoczęcia, std::time_t Data_zakończenia, std::time_t Godzina_zakończenia, std::string Opis, std::string Status);
    bool usuń(int Id);
    bool zmień_status(int Id, std::string Status);
};
