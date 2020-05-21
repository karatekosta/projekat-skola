#ifndef OSOBA_HPP_INCLUDED
#define OSOBA_HPP_INCLUDED
#include "komentar.hpp"
#include <vector>


class Osoba{

    protected :
        string ime;
        string prezime;
        string nickname;
        string password;
        vector <Komentar> komenari;


    public :
        Osoba(): ime("Zarko"), prezime("Zarkovic"),nickname("Kul lik"), password("1234"){
        }

        string getUser(){
            return nickname;
        }

        virtual int getTip()=0;

        string getSecretPassword(){
            return password;
        }

        virtual void ispis(){
              cout<<"Zovem se : " <<ime << " "<<prezime<<endl;
              cout<<"Nickname mi je : "<<nickname<<endl<<endl;
        }

        void ispisiMojeKomentare(){

            if(komenari.size()==0){
                cout<<"Nisam ostavio ni jedan komenta"<<endl;
            }
            else{
                for(int i=0; i<komenari.size(); i++){
                    cout<<komenari[i].getTeskt()<<", made by : "<<komenari[i].getKorisnik()<<endl;
                }
            }
            cout<<endl;

        }

        void dodajKomentar(string tekst){
            Komentar k(nickname, tekst, "01.01.2020.");
            komenari.push_back(k);
        }

        virtual string getPassword()=0;
        virtual bool izmeniTekstKomentara(Komentar& k, string& noviTekst) = 0;
};


#endif // OSOBA_HPP_INCLUDED
