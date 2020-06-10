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

    int get_id() { return _id; }
    std::string get_nazwa() { return _nazwa; }
    std::time_t get_data_rozpoczęcia() { return _data_rozpoczęcia; }
    std::time_t get_godzina_rozpoczęcia() { return _godzina_rozpoczęcia; }
    std::time_t get_data_zakończenia() { return _data_zakończenia; }
    std::time_t get_godzina_zakończenia() { return _godzina_zakończenia; }
    std::string get_opis() { return _opis; }
    std::string get_status() { return _status; }

    void set_id(int id) { _id=id; }
    void set_nazwa(std::string nazwa) { _nazwa=nazwa; }
    void set_data_rozpoczęcia(std::time_t data_rozpoczęcia) { _data_rozpoczęcia=data_rozpoczęcia; }
    void set_godzina_rozpoczęcia(std::time_t godzina_rozpoczęcia) { _godzina_rozpoczęcia=godzina_rozpoczęcia; }
    void set_data_zakończenia(std::time_t data_zakończenia) { _data_zakończenia=data_zakończenia; }
    void set_godzina_zakończenia(std::time_t godzina_rozpoczęcia) { _godzina_zakończenia=godzina_rozpoczęcia; }
    void set_opis(std::string opis) { _opis=opis; }
    void set_status(std::string status) { _status=status; }
};
