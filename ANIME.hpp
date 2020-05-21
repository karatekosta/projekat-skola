#ifndef ANIME_HPP_INCLUDED
#define ANIME_HPP_INCLUDED

#pragma once
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
#include "komentar.hpp"


class Anime{

    protected:
        Proizvodjac proizvodjac1;
        Ocene ocene1;
        Anime_serija serija1;
        Anime_film film1;
        Zanr zanr1;
        Release release1;
        Anime_facts facts;
        vector <Komentar> komentari;
        static int brojAnimea;

    public:
        Anime(string imeAnime, string ia, string zp, int a, int d, int p, int va, int be, int bs, int de, Zanrovi z, string oz, string mo, string dObjave, bool bnrp, string eg, string plia, string voa){
            //staviti setere
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

        void dodajKomentar(Komentar k){
            komentari.push_back(k);
        }

        void ispisAnime(){

            //staviti svugde getere
            cout<< "Ime: " << serija1.getIme() <<endl;
            cout<< "Ime autora: " << proizvodjac1.getImeAutora()<<endl;
            cout<< "Zemlja porekla: " << proizvodjac1.getZemlja() <<endl<<endl;
            cout<< "OCENE"<<endl;
            /*cout<< "Animacija: " << ocene1.get <<endl;
            cout<< "Detalji: " << ocene1.detalji <<endl;
            cout<< "Prica: " << ocene1.prica <<endl;
            cout<< "Voice acting: " << ocene1.voice_acting <<endl<<endl;*/
            cout<< "Broj epizoda: " << serija1.getEpizoda() <<endl;
            cout<< "Broj sezona: " << serija1.getSezona() <<endl;
            cout<< "Duzina epizode: " << serija1.getDuzinaEpizode() <<endl<<endl;
            cout<< "Zanr: " << zanr1.getZanr() <<endl;
            cout<< "Opis zanra: " << zanr1.getOpis() <<endl<<endl;
            cout<< "Mesto objave: " << release1.getMesto() <<endl;
            cout<< "Datum objave: " << release1.getDatum() <<endl<<endl;
            cout<<facts<<endl;

        }

        void ispisiSveKomentare(){
            for(int i=0; i<komentari.size(); i++){
                komentari[i].ispisiKomentar();
            }
        }
        void dodajOcenu(int a, int d, int p, int va){
            ocene1.dodajOcenu(a, d, p ,va);
        }

        double average(){
            return ocene1.average();
        }

        void setProizvodjac(string ime, string zemlja){
            proizvodjac1.setIme(ime);
            proizvodjac1.setZemlja(zemlja);
        }
};

#endif // ANIME_HPP_INCLUDED
