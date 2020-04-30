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

    public:
        Anime()
};

#endif // ANIME_HPP_INCLUDED
