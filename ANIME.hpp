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

class Anime{

    protected:
        Proizvodjac proizvodjac1;
        Ocene ocene1;
        Anime_serija serija1;
        Anime_film film1;
        Zanr zanr1;
        Release release1;
        Anime_facts facts;
        Korisnik korisnik1;
        string komentar;
        static int brojAnimea;

    public:
        Anime(string ia, string zp, int a, int d, int p, int va, int be, int bs, int de, Zanrovi z, string oz, string mo, string dObjave, bool bnrp, string eg, string plia, string voa){
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
            facts.bazirano_na_realnoj_prici;
            facts.easter_eggs=eg;
            facts.prave_lokacije_iz_animea=plia;
            facts.vreme_odvijanja_anime=voa;
            {brojAnimea++}
        }
        void ispisiBrojAnimea(){
            cout << brojAnimea <<endl;
        }
        void ispisAnime(){


        }
};

#endif // ANIME_HPP_INCLUDED
