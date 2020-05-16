#ifndef ZANR_HPP_INCLUDED
#define ZANR_HPP_INCLUDED

enum Zanrovi{komedija, tragedija, mystery, action, sci_fi, sports, romance, ecchi, shonen};

class Zanr{

    protected:
        Zanrovi zanr1;
        int popularnost_zanra;
        string opis_zanra;
};

#endif // ZANR_HPP_INCLUDED
