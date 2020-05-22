#include <iostream>
#include "korisnik.hpp"
#include "anime_facts.hpp"
#include "anime_film.hpp"
#include "anime_serija.hpp"
#include "korisnik.hpp"
#include "ocene.hpp"
#include "proizvodjac.hpp"
#include "release.hpp"
#include "zanr.hpp"
#include "site.hpp"
#include <vector>



Anime dodajAnime(){

    /*Proizvodjac p;
    Ocene o;
    Anime_serija as;
    Zanr z;
    Release r;*/
    string ime, ime_autora, zemlja_porekla, opis_zanra, mesto_objave, datum_objave;
    int broj_epizoda, broj_sezona, duzina_epizode, ocena_animacija, ocena_detalji, ocena_prica, ocena_voice_acting, zanr2;

    cout << "Unesite ime: " << endl;
    cin >> ime;
   // as.setIme(ime);
    cout << "Unesite ime autora: " << endl;
    cin >> ime_autora;
    //p.setIme(ime_autora);
    cout << "Unesite zemlju porekla: " << endl;
    cin >> zemlja_porekla;
    cout<< endl;
    //p.setZemlja(zemlja_porekla);
    cout << "OCENE" << endl;
    cout << "Unesite ocenu za animaciju: " << endl;
    cin >> ocena_animacija;
    //o.setAnimacija(ocena_animacija);
    cout << "Unesite ocenu za detalje: " << endl;;
    cin >> ocena_detalji;
    //o.setDetalji(ocena_detalji);
    cout << "Unesite ocenu za pricu: " << endl;
    cin >> ocena_prica;
   // o.setPrica(ocena_prica);
    cout << "Unesite ocenu za voice acting: " << endl;
    cin >> ocena_voice_acting;
   // o.setVoice(ocena_voice_acting);
    cout << "Unesite broj epizoda: " << endl;
    cin >> broj_epizoda;
    //as.setEpizoda(broj_epizoda);
    cout << "Unesite broj sezona: " << endl;
    cin >> broj_sezona;
    //as.setSezona(broj_sezona);
    cout << "Unesite duzinu jedne epizode: " << endl;
    cin >> duzina_epizode;
   // as.setDuzinaEpizode(duzina_epizode);
    cout << "Izaberite zanr" << endl;
    cout << "1. Komedija\n2. Tragedija\n3. Mystery\n4. Action\n5. Sci-fi\n6. Sports\n7. Romance\n8. Ecchi\n9. Shonen" << endl;

    cin >> zanr2;
   // z.setZanr(zanr2);

    cout << "Unesite opis zanra: " << endl;
    cin >> opis_zanra;
    //z.setOpis(opis_zanra);
    cout << "Unesite mesto objave: " << endl;
    cin >> mesto_objave;
   // r.setMesto(mesto_objave);
    cout << "Unesite datum objave: " << endl;
    cin >> datum_objave;
   // r.setDatum(datum_objave);

   int jeste;
    cout<<"Unesite 1. ako je ovaj anime baziran na realnoj prici"<<endl;
    cout<<"Unesite 2. ako je ovaj anime nije baziran na realnoj prici"<<endl;
    cin>>jeste;

    bool b;
    if(jeste == 1)
        b= true;
    else
        b= false;

    double duzinaF;
    string ee,prave_lokacije_iz_animea, vreme_odvijanja_anime;
    cout<<"Unesite easter eggs: "<<endl;
    cin>>ee;
    cout<<"Unesite Prave lokacije iz anime-a: "<<endl;
    cin>>prave_lokacije_iz_animea;
    cout<<"Unesite vreme odvijanja anime-a: "<<endl;
    cin>>vreme_odvijanja_anime;

    cout<<"Unesite duzinu filma : "<<endl;
    cin>>duzinaF;

    Anime a(ime, ime_autora, zemlja_porekla, ocena_animacija, ocena_detalji, ocena_prica, ocena_voice_acting, broj_epizoda, broj_sezona, duzina_epizode,zanr2, opis_zanra, mesto_objave, datum_objave,b,ee, prave_lokacije_iz_animea, vreme_odvijanja_anime, duzinaF);
    return a;
}




void meni(Site& site){
    Korisnik k;
    Anime anime;

    int broj;
    do{
        cout<<"*************************************"<<endl;
        cout<<"1. Registracija"<<endl;
        cout<<"2. Prijavljivanje"<<endl;
        cout<<"3. Trazi anime" <<endl;
        cout<<"4. Dodaj anime" <<endl;
        cout<<"5. Odjavljivanje" <<endl;
        cout<<"6. Dodaj komentar" <<endl;
        cout<<"7. Obrisi anime" <<endl;
        cout<<"0. Izlaz" <<endl;
        cout<<"*************************************"<<endl;

        cout<<"> ";
        cin>>broj;

        bool uspesno = false;
        bool nasao = false;
        string nazivAnimea;
        string tekst, datum;

        switch(broj){

            case 0:

                return;

            case 1:

                //cout<<"Unesite 1 za admin registraciju a 2 za obicnog korisnika"<<endl;

                k.registracija();
                k.upisiSignUp("korisnici.txt");
                break;

            case 2:

                do{
                    string u,p;
                    cout<<"Unesite username : "<<endl;
                    cin>>u;
                    cout<<"Unesite password : "<<endl;
                    cin>>p;

                    uspesno = site.logIn(u,p);

                    if(!uspesno)
                        cout<<"Pogresan username ili password pokusajte opet "<<endl;

                }while(!uspesno);
                    cout<<"Uspesno prijavljivanje nastavite sa radom "<<endl;

                break;

            case 3 :

                cout<<"Unesite ime zeljenog anime-a"<<endl;
                cin>>nazivAnimea;
                nasao= site.nadjiAnime(nazivAnimea);


                break;

            case 4 :
                anime = dodajAnime();
                site.dodajAnime(anime);

                break;

            case 5 :

                site.logOut();
                break;

            case 6 :

                cout<<"Unesite ime animea kojem zelite ostaviti komentar : "<<endl;
                cin>>nazivAnimea;
                cout<<"Unesite tekst komentara : "<<endl;
                cin>>tekst;
                cout<<"Unesite datum komentara : "<<endl;
                cin>> datum;
                uspesno = site.dodajKomentar(nazivAnimea, tekst, datum);
                if(uspesno)
                    cout<<"Postavljen komentar"<<endl;
                else
                    cout<<"Nije postavljen komentar"<<endl;
                break;

            case 7:
                cout<<"Unesite anime koji zelite da obrisete" <<endl;
                cin>>nazivAnimea;
                site.izbaciOdredjeni(nazivAnimea);
                break;

            default:
                break;


        }
    }while(broj!=0);

}


int main()
{

    /*funkcionalnost-   1. dodavanje anime(popunjavanje svih klasa osim komentara-Korisnik mora biti admin)
                        2. user dodaje komentar na odredjeni anime()*/


    Site site;


   /* Anime_info an1("Ime", "Engleski, Japanski", false);
    Anime_film af1(120, "Ime", "Engleski, Japanski", false);

    vector<Anime_info*> ai;
    ai.push_back(&an1);
    ai.push_back(&af1);
    for(auto it=ai.begin(); it<ai.end(); it++){
        (*it)->ispisImeJezik();
    }
    */
    //



   // Anime a = dodajAnime();
    Anime a2("aa","a","a",5,5,5,5,5,5,5,5,"aa","aa","aa",true,"aaa","aaa","aaa",2);

    //site.logIn("admin","admin");

    //site.dodajAnime(a2);


    meni(site);

//    cout<<"Pocinje ispis : "<<endl;
  //  site.ispisiAnime();


        //Korisnik().registracija();
        //Korisnik k1();
        //Korisnik k2;
        //k2.registracija();
        //k1.upisiSignUp("korisnici.txt");
        //k2.ispisiSignUp("korisnici.txt");

    return 0;
}
