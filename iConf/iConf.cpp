#include <iostream>
#include <vector>
#include <string>
#include <ctime>

#include "jest_zaproszony.h"
#include "Obszar.h"
#include "Pokój.h"
#include "Spotkanie.h"
#include "Użytkownik.h"
#include "Wyposażenie.h"

bool administrator_menu(Użytkownik user)
{
    char choice;
    bool status = true;
    std::cout << "Witaj " << user.get_nazwa() << "!\n";
    std::cout << " 1) Zarzadzaj obszarami\n 2) Zarzadzaj uzytkownikami\n 3) Zarzadzaj spotkaniami\n 4) Zarzadzaj pokojami 5) Moje konto\n \n 6)Wyloguj";
    while (status) {
        std::cout << "wybierz odpowiednia opcje ";
        std::cin >> choice;
        switch (choice) {
        case '1':
            break;
        case'2':
            break;
        case'3':
            break;
        case'4':
            break;
        case'5':
            break;
        case'6':
            return false;
        default:
            std::cout << "Nieprawidlowa opcja! Sprobuj jeszcze raz.\n";
            break;
        }
    }
}

bool menadżer_menu(Użytkownik user)
{
    char choice;
    bool status = true;
    std::cout << "Witaj " << user.get_nazwa() << "!\n";
    std::cout << " 1) Przegladaj obszary\n 2) Przegladaj spotkania\n 3) Przegladaj pokoje\n 4) Moje konto\n 5)Wyloguj";
    while (status) {
        std::cout << "wybierz odpowiednia opcje: ";
        std::cin >> choice;
        switch (choice) {
        case '1':
            break;
        case'2':
            break;
        case'3':
            break;
        case'4':
            break;
        case'5':
            return false;
        default:
            std::cout << "Nieprawidlowa opcja! Sprobuj jeszcze raz.\n";
            break;
        }
    }
    return true;
}

bool pracownik_menu(Użytkownik user)
{
    char choice;
    bool status=true;
    std::cout << "Witaj " << user.get_nazwa() << "!\n";
    std::cout << " 1) Przegladaj obszary\n 2) Przegladaj spotkania\n 3) Przegladaj pokoje\n 4) Moje konto\n 4)Wyloguj";
    while (status) {
        std::cout << "wybierz odpowiednia opcje ";
        std::cin >> choice;
        switch (choice) {
        case '1':
            break;
        case'2':
            break;
        case'3':
            break;
        case'4':
            break;
        case'5':
            return false;
        default:
            std::cout << "Nieprawidlowa opcja! Sprobuj jeszcze raz.\n";
            break;
        }
    }
    return false;
}

int main()
{
    srand(time(NULL));
    Obszar bieda(12, " help pls ", "help pls2 ", "help pls3");
    std::cout << "work pls pls"<<" update";
}

