#ifndef KOMENTAR_HPP_INCLUDED
#define KOMENTAR_HPP_INCLUDED
#include <string.h>

using namespace std;

class Komentar{


private :
    string korisnik;
    string tekst;
    string datum;
    bool menjan;

public :
    Komentar(){
        korisnik = "";
        tekst = "";
        datum = "";
        menjan = false;
    }

    Komentar(string k, string t, string d){
        korisnik = k;
        tekst = t;
        datum = d;
        menjan = false;
    }

    string getKorisnik(){return korisnik;}
    string getTeskt(){return tekst;}
    string getDatum(){return datum;}
    bool getMenjan(){return menjan;}
    void setTekst(string t, string k){tekst = t; menjan = true; korisnik=k;}

    void ispisiKomentar(){
        cout<<"Komenatar: " << tekst << endl << "By: " << korisnik << endl;

        if(menjan){
            cout << "Komentar je prethodno menjan" << endl;
        }
    }

};


#endif // KOMENTAR_HPP_INCLUDED
