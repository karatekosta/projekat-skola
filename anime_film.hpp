#ifndef ANIME_FILM_HPP_INCLUDED
#define ANIME_FILM_HPP_INCLUDED
#include "anime_info.hpp"

class Anime_film: public Anime_info{

    protected:
        double duzina_filma;
        Anime_info info;
    public:
        Anime_film(){
            duzina_filma=0;
            ime="";
            jezik="";
            zavrseno=false;
        }

        Anime_film(double df, string i, string j, bool z): info(i, j, z){
            duzina_filma=df;
            ime=i;
            jezik=j;
            zavrseno=z;
        }

        void ispis(){
            Anime_info::ispisImeJezik();
            cout<< "Duzina filma: " << duzina_filma << endl;
        }

            void duzina(){
                duzina_filma=duzina_filma+30;
            }

};

#endif // ANIME_FILM_HPP_INCLUDED
