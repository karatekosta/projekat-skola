#ifndef SITE_HPP_INCLUDED
#define SITE_HPP_INCLUDED
#include <vector>
#include "ANIME.hpp"
#include "osoba.hpp"

class Site{
    protected:
            vector <Anime> a1;
            vector <Osoba> k1;
            Osoba* trenutniKorisnik;
            bool logedIn;
    public:

        bool logIn(string username, string password){
            bool nasao=false;

            for(int i=0; i<k1.size(); i++){
                if(k1[i].getUsername()==username){
                    if(k1[i].getSecretPassword()==password){
                        nasao = true;
                        logedIn=true;
                        trenutniKorisnik=&(k1[i]);
                    }
                }
            }
            return nasao;
        }

        void logOut(){
            logedIn=false;
        }

        void izbaciPoslednji(){
                a1.pop_back();
        }

        void izbaciOdredjeni(string ime){
            for(auto it=a1.begin(); it<a1.end; it++){
                if(ime==it->getIme()){
                    a1.erase(it);
                    cout<< "Nadjen anime" <<endl;
                }
            }
        }

        void ispisiAnime(){
            for (auto it=a1.begin(); it<a1.end(); it++){
                (*it)->ispisAnime();
        }

        Anime nadjiAnime(string ime){
            bool nasao = false;
            for(int i=0; i<a1.size(); i++){
                if(a1[i].getIme()==ime){
                    cout<<"Postoji anime"<<endl;
                    nasao = true;
                    return a1[i];
                }
            }
            if(!nasao)
                cout<<"Nema tog anime-a"<<endl;
            }
};


#endif // SITE_HPP_INCLUDED
