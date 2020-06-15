#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include "Obszar.h"
#include "Pokoj.h"
#include "Spotkanie.h"
#include "Uzytkownik.h"
#include "Wyposazenie.h"

int main()
{
    //uzytownik
    Uzytkownik uzytkownik_testowy1(1, "test1", "Uzytkownik", "Testowy", "Uzytkownik Testowy", "test@iconf.com");
    Uzytkownik uzytkownik_testowy2(2, "test2", "Uzytkownik", "Testowy", "Uzytkownik Testowy", "test@iconf.com");
    //obszar
    Obszar obszar_testowy(1, "Obszar Testowy", "WI ZUT", "obszar_testowy.png");
    //pokoj
    Pokoj pokoj_testowy(1, "Pokoj Testowy", 123.45, "pokoj_testowy.png");
    pokoj_testowy.dodaj_do_obszaru(1);
    //wyposazenie
    Wyposazenie wyposazenie_testowe(1, "Krzeslo", 10, "Krzeslo obrotowe czarne");
    wyposazenie_testowe.dodaj_do_pokoju(1);
    //spotkanie
    Spotkanie spotkanie_testowe(1, "Spotkanie Testowe", "20-06-2020", "12:00:00", "20-06-2020", "15:00:00", "Opis Testowy", "Utworzone", 1);
    spotkanie_testowe.przypisz_pokoj(1);
    spotkanie_testowe.przypisz_goscia(1);
    spotkanie_testowe.przypisz_goscia(2);
    spotkanie_testowe.show_info();
}

