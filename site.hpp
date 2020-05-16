#ifndef SITE_HPP_INCLUDED
#define SITE_HPP_INCLUDED
#include <vector>
#include "ANIME.hpp"
#include "korisnik.hpp"

class Site{
    protected:
            vector <Anime> a1;
            vector <Korisnik> k1;
    public:

        void dodajAnime(){
            Anime a(imeAnime, ia, zp, a, d, p, va, be, bs, de, z, oz, mo, dObjave, bnrp, eg, plia, voa, df);
            a1.push_back(a);
        }

        void izbaciPoslednji(vector<Anime> &a1){
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

        void nadjiAnime(vector<Anime> &a1, string ime){
            bool nasao = false;
            for(int i=0; i<a1.size(); i++){
                if(a1[i]==ime){
                    cout<<"Postoji anime"<<endl;
                    nasao = true;
                }
            }
            if(!nasao)
                cout<<"Nema tog broja"<<endl;
        }
};


#endif // SITE_HPP_INCLUDED
