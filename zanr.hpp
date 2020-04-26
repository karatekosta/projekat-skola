#ifndef ZANR_HPP_INCLUDED
#define ZANR_HPP_INCLUDED

enum Zanrovi{komedija, tragedija, mystery, action, sci-fi, sports, romance, ecchi, shonen};

class Zanr{

    private:
        Zanrovi zanr1;
        int popularnost_zanra;
        string opis_zanra;
};

#endif // ZANR_HPP_INCLUDED
