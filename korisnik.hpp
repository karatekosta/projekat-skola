#ifndef KORISNIK_HPP_INCLUDED
#define KORISNIK_HPP_INCLUDED
#include "osoba.hpp"
#include <fstream>
#include <string>

using namespace std;

class Korisnik: public Osoba{

    protected:
        int brojPogledanihAnimea;
    public:

        Korisnik(){
            nickname="";
            password="";
        }

        Korisnik(string n, string p){
                nickname=n;
                password=p;
            }

        void setNickname(const string n){
            nickname=n;
        }

        void setPassword(const string p){
            password=p;
        }

        void registracija(){

            string n, p;
            cout << "Nickname: " << endl;
            cin >> n;
            cout << "Password: " << endl;
            cin >> p;

            setNickname(n);
            setPassword(p);
        }

        void upisiSignUp(string nazivFajla){
            ofstream outfile;
            outfile.open("korisnici.txt", std::ios_base::app);
            outfile<< nickname << "," << password<< "," <<endl;
            outfile.close();
        }

        void ispisiSignUp(string korisnici){
            ifstream infile;
            infile.open("korisnici.txt");
            string linija;
            while ( getline (infile,linija) )
                {
                    cout << linija << '\n';
                }
                infile.close();
                }

    string getPassword(){
        return password;
    }

    bool izmeniTekstKomentara(Komentar& k, string& noviTekst){

        bool uspesno = false;
        if(k.getKorisnik() == nickname){
            k.setTekst(noviTekst, nickname);
            uspesno = true;
       }
       return uspesno;

    }

    int getTip(){
            return 0;
        }
};

#endif // KORISNIK_HPP_INCLUDED
