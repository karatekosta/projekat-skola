#include <iostream>

using namespace std;

class Anime_info{
    string ime;
    string jezik;
    bool zavrseno;
};

class Proizvodjac{
    string ime_autora;
    string zemlja_porekla;
};

class Ocene{
    int animacija;
    int detalji;
    int prica;
    int voice_acting;
};

class Anime_serija{
    int broj_sezona;
    int broj_epizoda;
    double duzina_epizode;
};

class Anime_film{
    double duzina_filma
};

class Zanr{
    string zanrovi; // pr: komedija, tragedija, mystery, action, sci-fi, sports, romance
};

class Release{
    string datum_objave;
    string mesto_objave;
};

class Anime_facts{
    bool Bazirano_na_realnoj_prici;
    string easter_eggs;
    string prave_lokacije_iz_animea;
    string vreme_odvijanja_anime;
};

class Korisnik{
    string komentar;
};
int main()
{
    Anime_info anime1;
    Proizvodjac proizvodjac1;
    Ocene ocene1;
    Anime_serija serija1;
    Anime_film film1;
    Zanr zanr1;
    Release release1;
    Anime_facts facts;
    return 0;
}
