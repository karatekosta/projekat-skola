#ifndef ADMIN_HPP_INCLUDED
#define ADMIN_HPP_INCLUDED
#include "osoba.hpp"

class Administrator : public Osoba{

private :
    bool moderator;

public :
    Administrator(){
        ime = "Admin";
        prezime = "Adminkovic";
        userName = "admin";
        password = "adminadmin";
        moderator = false;
    }

    void ispis(){
        Osoba::ispis();

        if(moderator){
            cout<<"Ja sam moderator"<<endl<<endl;
        }else{
            cout<<"Ja sam pravi admin"<<endl<<endl;
        }

    }

    string getPassword(){
        return "****";
    }

    bool izmeniTekstKomentara(Komentar& k, string& noviTekst){

        k.setTekst(noviTekst, nickname);
        return true;

    }

    int getTip(){
            return 1;
        }

};

#endif // ADMIN_HPP_INCLUDED
