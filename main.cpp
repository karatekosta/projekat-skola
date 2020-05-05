#include <iostream>
#include "korisnik.hpp"

using namespace std;

int main()
{
    /*funkcionalnost- 1. dodavanje anime(popunjavanje svih klasa osim komentara-Korisnik mora biti admin)
    2. user dodaje komentar na odredjeni anime()*/
        //Korisnik().registracija();
        Korisnik k1("Kosta", "Kole", "1234");
        //k1.registracija();
        //k1.upisiSignUp("korisnici.txt");
        k1.ispisiSignUp("korisnici.txt");
    return 0;
}
