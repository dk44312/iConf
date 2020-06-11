#include <iostream>
#include <vector>
#include <string>
#include <ctime>

#include "jest_zaproszony.h"
#include "Obszar.h"
#include "Pokoj.h"
#include "Spotkanie.h"
#include "Uzytkownik.h"
#include "Wyposazenie.h"

bool exit_application() {//return true-exit app, return false- dont exit app
    char shut_down;
    while (true) {
        std::cout << "Czy napewno chcesz zamknac aplikacje?: \n T-tak\nN-nie ";
        std::cin >> shut_down;
        if (shut_down == 'T' || shut_down == 't') {
            return true;
        }
        else if (shut_down == 'N' || shut_down == 'n') {
            return false;
        }
        else {
            std::cout << "Nieprawidlowy wybor! sprobuj jeszcze raz.";
        }
    }
}

bool log_out() {//return true- log out form account, return false dont log out from account
    char log_out;
    while (true) {
        std::cout << "Czy napewno chcesz wylogowac?: \n T-tak\nN-nie ";
        std::cin >> log_out;
        if (log_out == 'T' || log_out == 't') {
            return true;
        }
        else if (log_out == 'N' || log_out == 'n') {
            return false;
        }
        else {
            std::cout << "Nieprawidlowy wybor! sprobuj jeszcze raz.";
        }
    }
}

bool administrator_menu(Uzytkownik user) //return true dla zakoncz aplikacje, return false dla wylogowania
{
    char choice;
    bool status = true;
    std::cout << "Witaj " << user.get_nazwa() << "!\n";
    while (status) {
        std::cout << " 1) Zarzadzaj obszarami\n 2) Zarzadzaj uzytkownikami\n 3) Zarzadzaj spotkaniami\n 4) Zarzadzaj pokojami 5) Moje konto\n \n 6) Wyloguj\n 7) Zamknij aplikacje";
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
            bool temp = log_out();
            if (temp == true) {
                return false;
            }
            break;
        case'7':
            bool temp = exit_application();
            if (temp == true) {
                return true;
            }
            break;
        default:
            std::cout << "Nieprawidlowa opcja! Sprobuj jeszcze raz.\n";
            break;
        }
    }
    return true;
}

bool menadzer_menu(Uzytkownik user)//return true dla zakoncz aplikacje, return false dla wylogowania
{
    char choice;
    bool status = true;
    std::cout << "Witaj " << user.get_nazwa() << "!\n";
    while (status) {
        std::cout << " 1) Przegladaj obszary\n 2) Przegladaj spotkania\n 3) Przegladaj pokoje\n 4) Moje konto\n 5) Wyloguj\n 6) Zamknij aplikacje";
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
            bool temp = log_out();
            if (temp == true) {
                return false;
            }
            break;
        case'6':
            bool temp = exit_application();
            if (temp == true) {
                return true;
            }
            break;
        default:
            std::cout << "Nieprawidlowa opcja! Sprobuj jeszcze raz.\n";
            break;
        }
    }
    return true;
}

bool pracownik_menu(Uzytkownik user)//return true dla zakoncz aplikacje, return false dla wylogowania
{
    char choice;
    bool status=true;
    std::cout << "Witaj " << user.get_nazwa() << "!\n";
    while (status) {
        std::cout << " 1) Przegladaj obszary\n 2) Przegladaj spotkania\n 3) Przegladaj pokoje\n 4) Moje konto\n 5) Wyloguj\n 6) Zamknij aplikacje\n";
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
            bool temp = log_out();
            if (temp == true) {
                return false;
            }
            break;
        case'6':
            bool temp = exit_application();
            if (temp == true) {
                return true;
            }
            break;
        default:
            std::cout << "Nieprawidlowa opcja! Sprobuj jeszcze raz.\n";
            break;
        }
    }
    return true;
}

bool gosc_menu() //return true dla zakoncz aplikacje, return false dla zalogowania
{
    char choice;
    bool status = true;
    std::cout << "Witaj uzytkowniku!\n";
    while (status) {
        std::cout << "1) Przegladaj obszary\n 2) Przegladaj Pokoje\n 3) Przegladaj Spotkania\n 4) Zaloguj\n 5) Zamknij aplikacje \n";
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
            bool temp = exit_application();
            if (temp == true) {
                return true;
            }
            break;
        default:
            std::cout << "Nieprawidlowa opcja! Sprobuj jeszcze raz.\n";
            break;
        }
    }
    return true;
}

int main()
{
    srand(time(NULL));
    Obszar bieda(12, " help pls ", "help pls2 ", "help pls3");
    std::cout << "work pls pls"<<" update";
}

