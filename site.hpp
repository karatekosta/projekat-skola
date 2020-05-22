#ifndef SITE_HPP_INCLUDED
#define SITE_HPP_INCLUDED
#include <vector>
#include "ANIME.hpp"
#include "osoba.hpp"
#include "komentar.hpp"

using namespace std;

class Site{
    protected:
            vector <Anime> a1;
            vector <Korisnik> k1;
            Osoba* trenutniKorisnik;
            bool logedIn;
    public:

        Site(){
            trenutniKorisnik = NULL;
            logedIn = false;
            ucitajKorisnike();
        }

        bool getLogedIn(){
            return logedIn;
        }

        bool isAdmin(){
            if(trenutniKorisnik->getTip()=="admin")
                return true;
            else
                return false;
        }

        void dodajAnime(Anime a){

            if(logedIn==true){

                cout<<trenutniKorisnik->getTip()<<endl;
                if(trenutniKorisnik->getTip() == "admin"){
                     a1.push_back(a);
                     cout<<"Uspesno dodat anime"<<endl;
                     return;
                }else if(trenutniKorisnik->getTip() == "obicni"){
                    cout<<"Samo admin moze dodati anime"<<endl;
                }

            }else if(logedIn==false){
                cout<<"Morate se registrovati kako bi dodali anime"<<endl;
            }


        }

        void ucitajKorisnike(){
            ifstream infile;
            infile.open("korisnici.txt");
            string linija;
            int i = 0;
            Korisnik k;
            while ( getline (infile,linija) ){
                    i++;
            }
            infile.close();

            for(int j=0; j<i; j++){
                k.ucitajSaFajla("korisnici.txt", j+1);
                //k.ispis();
                k1.push_back(k);

            }
        }


        bool logIn(string username, string password){
            bool nasao=false;

            for(int i=0; i<k1.size(); i++){
                if(k1[i].getNickname()==username){
                    if(k1[i].getSecretPassword()==password){
                        //k1[i].ispis();
                        nasao = true;
                        logedIn=true;
                        trenutniKorisnik=&(k1[i]);
                        break;
                    }
                }
            }
            return nasao;
        }

        void logOut(){
            logedIn=false;
            trenutniKorisnik = NULL;
        }

        void izbaciPoslednji(){
                a1.pop_back();
        }

        void izbaciOdredjeni(string ime){
            for(auto it=a1.begin(); it<a1.end(); it++){
                if(ime==it->getIme()){
                    a1.erase(it);
                    cout<< "Nadjen anime" <<endl;
                }
            }
        }

        void ispisiAnime(){
                for (auto it=a1.begin(); it<a1.end(); it++){
                    (*it).ispisAnime();
            }
        }

        bool nadjiAnime(string ime){

            if(logedIn){
                bool nasao = false;
                for(int i=0; i<a1.size(); i++){
                    if(a1[i].getIme()==ime){
                        cout<<"Postoji anime"<<endl;
                        nasao = true;
                        a1[i].ispisAnime();
                    }
                }

                if(!nasao)
                    cout<<"Nema tog anime-a"<<endl;
                    return nasao;
            }
            return false;

        }

          bool dodajKomentar(string imeAnime, string tekstKomentara, string datum){

            if(logedIn){
                bool nasao = false;
                for(int i=0; i<a1.size(); i++){
                    if(a1[i].getIme()==imeAnime){
                        cout<<"Postoji anime"<<endl;
                        nasao = true;
                        Komentar k(trenutniKorisnik->getNickname(), tekstKomentara, datum);
                        a1[i].dodajKomentar(k);

                        cout<<"Dodat komentar"<<endl;

                        //a1[i].ispisAnime();
                    }
                }

                if(!nasao)
                    cout<<"Nema tog anime-a"<<endl;
                    return nasao;
            }
            return false;

        }

};


#endif // SITE_HPP_INCLUDED
