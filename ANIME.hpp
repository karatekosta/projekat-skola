#ifndef ANIME_HPP_INCLUDED
#define ANIME_HPP_INCLUDED

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

class Anime{

    protected:
        Proizvodjac proizvodjac1;
        Ocene ocene1;
        Anime_serija serija1;
        Anime_film film1;
        Zanr zanr1;
        Release release1;
        Anime_facts facts;
        vector <string> komentari;
        static int brojAnimea;

    public:
        Anime(string imeAnime, string ia, string zp, int a, int d, int p, int va, int be, int bs, int de, Zanrovi z, string oz, string mo, string dObjave, bool bnrp, string eg, string plia, string voa){
            serija1.ime=imeAnime;
            proizvodjac1.ime_autora=ia;
            proizvodjac1.zemlja_porekla=zp;
            ocene1.animacija=a;
            ocene1.detalji=d;
            ocene1.prica=p;
            ocene1.voice_acting=va;
            serija1.broj_epizoda=be;
            serija1.broj_sezona=bs;
            serija1.duzina_epizode=de;
            zanr1.zanr1=z;
            zanr1.opis_zanra=oz;
            release1.mesto_objave=mo;
            release1.datum_objave=dObjave;
            facts.bazirano_na_realnoj_prici=bnrp;
            facts.easter_eggs=eg;
            facts.prave_lokacije_iz_animea=plia;
            facts.vreme_odvijanja_anime=voa;
            film1.duzina_filma=df;
            {brojAnimea++}
        }

        string getIme(){
            return ime;
        }


        void ispisiBrojAnimea(){
            cout << brojAnimea <<endl;
        }

        void ispisAnime(){
            cout<< "Ime: " << serija1.ime <<endl;
            cout<< "Ime autora: " << proizvodjac1.ime_autora<<endl;
            cout<< "Zemlja porekla: " << proizvodjac1.zemlja_porekla <<endl<<endl;
            cout<< "OCENE"<<endl;
            cout<< "Animacija: " << ocene1.animacija <<endl;
            cout<< "Detalji: " << ocene1.detalji <<endl;
            cout<< "Prica: " << ocene1.prica <<endl;
            cout<< "Voice acting: " << ocene1.voice_acting <<endl<<endl;
            cout<< "Broj epizoda: " << serija1.broj_epizoda <<endl;
            cout<< "Broj sezona: " << serija1.broj_sezona <<endl;
            cout<< "Duzina epizode: " << serija1.duzina_epizode <<endl<<endl;
            cout<< "Zanr: " << zanr1.zanr1=z; <<endl;
            cout<< "Opis zanra: " << zanr1.opis_zanra <<endl<<endl;
            cout<< "Mesto objave: " << release1.mesto_objave <<endl;
            cout<< "Datum objave: " << release1.datum_objave <<endl<<endl;
            cout<<facts<<endl;

        }
};

#endif // ANIME_HPP_INCLUDED
