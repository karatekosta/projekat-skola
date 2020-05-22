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

    public :
        static int brojAnimea;

    protected:
        Proizvodjac proizvodjac1;
        Ocene ocene1;
        Anime_serija serija1;
        Anime_film film1;
        Zanr zanr1;
        Release release1;
        Anime_facts facts;
        vector <Komentar> komentari;


    public:
        Anime(){}
        Anime(string imeAnime, string ia, string zp, int a, int d, int p, int va, int be, int bs, int de, int z, string oz, string mo, string dObjave, bool bnrp, string eg, string plia, string voa, double df){

            serija1.setIme(imeAnime);
            proizvodjac1.setIme(ia);
            proizvodjac1.setZemlja(zp);
            ocene1.setAnimacija(a);
            ocene1.setDetalji(d);
            ocene1.setPrica(p);
            ocene1.setVoice(va);
            serija1.setEpizoda(be);
            serija1.setSezona(bs);
            serija1.setDuzinaEpizode(de);
            zanr1.setZanr(z);
            zanr1.setOpis(oz);
            release1.setMesto(mo);
            release1.setDatum(dObjave);
            facts.setBNRP(bnrp);
            facts.setEaster(eg);
            facts.setPLIA(plia);
            facts.setVOA(voa);
            film1.setDuzinaFilma(df);
            Anime::brojAnimea++;
        }

        string getIme(){
            return serija1.getIme();
        }


        void ispisiBrojAnimea(){
            cout << brojAnimea <<endl;
        }

        void dodajKomentar(Komentar k){
            komentari.push_back(k);
        }

        void ispisAnime(){

            cout<< "Ime: " << serija1.getIme() <<endl;
            cout<< "Ime autora: " << proizvodjac1.getImeAutora()<<endl;
            cout<< "Zemlja porekla: " << proizvodjac1.getZemlja() <<endl<<endl;

            cout<< "OCENE"<<endl;
            cout<< "Animacija: " << ocene1.getAnimacija() <<endl;
            cout<< "Detalji: " << ocene1.getDetalji() <<endl;
            cout<< "Prica: " << ocene1.getPrica() <<endl;
            cout<< "Voice acting: " << ocene1.getVoice() <<endl;
            cout<< "Ukupan broj ocena: " <<ocene1.getBrojOcena() <<endl<<endl;

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

int Anime::brojAnimea = 0;

#endif // ANIME_HPP_INCLUDED
