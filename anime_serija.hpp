#ifndef ANIME_SERIJA_HPP_INCLUDED
#define ANIME_SERIJA_HPP_INCLUDED
#include "anime_info.hpp"

class Anime_serija: public Anime_info{

    protected:
        int broj_sezona;
        int broj_epizoda;
        double duzina_epizode;

    public:

        Anime_serija():Anime_info("","",false), broj_sezona(1), broj_epizoda(12), duzina_epizode(20){}

        Anime_serija(string i, string j, bool z, int br_sez, int br_ep, double duz_ep):Anime_info(i, j, z), broj_sezona(br_sez), broj_epizoda(br_ep), duzina_epizode(duz_ep){}

        Anime_serija(const Anime_serija& a):Anime_info(a), broj_sezona(a.broj_sezona), broj_epizoda(a.broj_epizoda), duzina_epizode(a.duzina_epizode){}

        Anime_serija(const Anime_info& a, int br_sez, int br_ep, double duz_ep):Anime_info(a), broj_sezona(br_sez), broj_epizoda(br_ep), duzina_epizode(duz_ep){}


        int duzina_serijala(){
            return broj_epizoda*duzina_epizode;
        }

        void credits(){
            duzina_epizode=duzina_epizode+30;
        }

        int getSezona(){
            return broj_sezona;
        }

        int getEpizoda(){
            return broj_epizoda;
        }

        double getDuzinaEpizode(){
            return duzina_epizode;
        }

        void setSezona(const int s){
            broj_sezona=s;
        }

        void setEpizoda(const int e){
            broj_epizoda=e;
        }

        void setDuzinaEpizode(const double de){
            duzina_epizode=de;
        }

};

#endif // ANIME_SERIJA_HPP_INCLUDED
