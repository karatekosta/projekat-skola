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
#include <vector>


using namespace std;

void dodajAnime(){
    Proizvodjac p;
    Ocene o;
    Anime_serija as;
    Zanr z;
    Release r;
    string ime, ime_autora, zemlja_porekla, opis_zanra, mesto_objave, datum_objave;
    int broj_epizoda, broj_sezona, duzina_epizode, ocena_animacija, ocena_detalji, ocena_prica, ocena_voice_acting;

    cout << "Unesite ime: " << endl;
    cin >> ime;
    //as.setIme(ime);
    cout << "Unesite ime autora: " << endl;
    cin >> ime_autora;
    p.setIme(ime_autora);
    cout << "Unesite zemlju porekla: " << endl << endl;
    cin >> zemlja_porekla;
    p.setZemlja(zemlja_porekla);
    cout << "OCENE" << endl;
    cout << "Unesite ocenu za animaciju: " << endl;
    cin >> ocena_animacija;
    o.setAnimacija(ocena_animacija);
    cout << "Unesite ocenu za detalje: " << endl;;
    cin >> ocena_detalji;
    o.setDetalji(ocena_detalji);
    cout << "Unesite ocenu za pricu: " << endl;
    cin >> ocena_prica;
    o.setPrica(ocena_prica);
    cout << "Unesite ocenu za voice acting: " << endl;
    cin >> ocena_voice_acting;
    o.setVoice(ocena_voice_acting);
    cout << "Unesite broj epizoda: " << endl;
    cin >> broj_epizoda;
    as.setEpizoda(broj_epizoda);
    cout << "Unesite broj sezona: " << endl;
    cin >> broj_sezona;
    as.setSezona(broj_sezona);
    cout << "Unesite duzinu jedne epizode: " << endl;
    cin >> duzina_epizode;
    as.setDuzinaEpizode(duzina_epizode);
    cout << "Izaberite zanr" << endl;
    cout << "1. Komedija\n2. Tragedija\n3. Mystery\n4. Action\n5. Sci-fi\n6. Sports\n7. Romance\n8. Ecchi\n9. Shonen" << endl;

    cin >> zanr2;
    cout << "Unesite opis zanra: " << endl;
    cin >> opis_zanra;
    z.setOpis(opis_zanra);
    cout << "Unesite mesto objave: " << endl;
    cin >> mesto_objave;
    r.setMesto(mesto_objave);
    cout << "Unesite datum objave: " << endl;
    cin >> datum_objave;
    r.setDatum(datum_objave);

}
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

void meni(){
    Korisnik k;

    int broj;
    do{
        cout<<"*************************************"<<endl;
        cout<<"1. Registracija"<<endl;
        cout<<"2. Prijavljivanje"<<endl;
        cout<<"3. Trazi anime" <<endl;
        cout<<"0. Izlaz" <<endl;
        cout<<"*************************************"<<endl;

        switch(broj){
            case 1:
            k.registracija();
            k.upisiSignUp("korisnici.txt");
            break;

            case 2:
                ;
                break;
            }
            case 0:
                return;

    }while(broj!=0)

}
int main()
{
    /*funkcionalnost-   1. dodavanje anime(popunjavanje svih klasa osim komentara-Korisnik mora biti admin)
                        2. user dodaje komentar na odredjeni anime()*/



    Anime_info an1("Ime", "Engleski, Japanski", false);
    Anime_film af1(120, "Ime", "Engleski, Japanski", false);

    vector<Anime_info*> ai;
    ai.push_back(&an1);
    ai.push_back(&af1);
    for(auto it=ai.begin(); it<ai.end(); it++){
        (*it)->ispisImeJezik();
    }

        //Korisnik().registracija();
        Korisnik k1();
        //Korisnik k2;
        //k2.registracija();
        k1.upisiSignUp("korisnici.txt");
        //k2.ispisiSignUp("korisnici.txt");
    return 0;
}
