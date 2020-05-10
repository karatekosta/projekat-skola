#include <iostream>
#include "korisnik.hpp"
#include "anime_facts.hpp"
#include "anime_film.hpp"
#include "anime_info.hpp"
#include "anime_serija.hpp"
#include "korisnik.hpp"
#include "ocene.hpp"
#include "proizvodjac.hpp"
#include "release.hpp"
#include "zanr.hpp"


using namespace std;

ostream& operator<<(ostream& izlaz, const Ocene& o){
    izlaz<<"Ocene:"<<endl;
    izlaz<<"Animacija: "<<o.animacija<<endl;
    izlaz<<"Detalji: "<<o.detalji<<endl;
    izlaz<<"Prica: "<<o.prica<<endl;
    izlaz<<"Voice acting: "<<o.voice_acting<<endl;

    return izlaz;
}

ostream& operator<<(ostream& izlaz, const Anime_facts& o){
    if(o.bazirano_na_realnoj_prici==false){
        izlaz<<"Ovaj anime nije baziran na realnoj prici, nego je rad fikcije."<<endl;
    }else if(o.bazirano_na_realnoj_prici==true){
        izlaz<<"Ovaj anime je baziran na realnoj prici."<<endl;
    }

    izlaz<<"Easter eggs: "<<o.easter_eggs<<endl;
    izlaz<<"Prave lokacije iz anime-a: "<<o.prave_lokacije_iz_animea<<endl;
    izlaz<<"Vreme odvijanja anime-a: "<<o.vreme_odvijanja_anime<<endl;

    return izlaz;
}

ostream& operator<<(ostream& izlaz, const Proizvodjac& o){
    izlaz<<"Proizvodjac i zemlja porekla:"<<endl;
    izlaz<<"Proizvodjac: "<<o.ime_autora<<endl;
    izlaz<<"Detalji: "<<o.zemlja_porekla<<endl;

    return izlaz;
}

int main()
{
    /*funkcionalnost-   1. dodavanje anime(popunjavanje svih klasa osim komentara-Korisnik mora biti admin)
                        2. user dodaje komentar na odredjeni anime()*/
        //Korisnik().registracija();
        Korisnik k1("Kosta", "Kole", "1234");
        //k1.registracija();
        k1.upisiSignUp("korisnici.txt");
        k1.ispisiSignUp("korisnici.txt");
    return 0;
}
