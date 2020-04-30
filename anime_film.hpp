#ifndef ANIME_FILM_HPP_INCLUDED
#define ANIME_FILM_HPP_INCLUDED
#include "anime_info.hpp"

class Anime_film: private Anime_info{

    private:
        double duzina_filma;
        Anime_info info;
    public:
        Anime_film(){
            duzina_filma=0;
            info.ime="";
            info.jezik="";
            info.zavrseno=false;

        }
        Anime_film(double df, string i, string j, bool z):info(i, j, z){
                duzina_filma=df;

            }

};

#endif // ANIME_FILM_HPP_INCLUDED
