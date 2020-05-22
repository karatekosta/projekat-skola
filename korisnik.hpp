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

            cout << "Ime: " << endl;
            cin >> ime;
            cout << "Prezime: " << endl;
            cin >> prezime;
            cout << "Nickname: " << endl;
            cin >> nickname;
            cout << "Password: " << endl;
            cin >> password;

        }

        void upisiSignUp(string nazivFajla){
            ofstream outfile;
            outfile.open("korisnici.txt", std::ios_base::app);
            outfile<< nickname << "," << password<< ","<<ime<<","<<prezime<<","<<getTip() <<endl;
            outfile.close();
        }

        void ispis(){

            cout<<"Ime : "<< ime<< " Prezime : "<<prezime<<" Nickname : "<<nickname<<" Password : " << password <<" Tip : "<< tip<<endl;
        }

        void ucitajSaFajla(string nazivFajla, int linija){
            ifstream infile;
            infile.open(nazivFajla);
            string data;
            int i = 0;
            while(i<linija){
                infile >> data;
                i++;
            }
            int polje = 0;
            int pozicija = 0;
            int brojKaraktera = 0;

            char buffer[30];

            for (int i = 0; i < data.size(); i++){


                if(data[i]==','){
                    polje++;
                    //cout<<"Pozicija : "<<pozicija<<" brojKaraktera : "<<brojKaraktera<<endl;
                    if(polje==1){

                        data.copy(buffer, brojKaraktera, pozicija);
                        buffer[brojKaraktera]='\0';
                        nickname = buffer; // Ako imas intove ili nesto drugo moraces raditi atoi ili odgovarajucu funkciju
                        pozicija = brojKaraktera+1;
                        brojKaraktera = -1; // Jer kasnije svakako imamo ++

                    }else if(polje==2){

                        data.copy(buffer,  brojKaraktera, pozicija);
                        buffer[brojKaraktera]='\0';
                        password = buffer;
                        pozicija = pozicija + brojKaraktera + 1;
                        brojKaraktera = -1;

                    }else if(polje==3){

                        data.copy(buffer,  brojKaraktera, pozicija);
                        buffer[brojKaraktera]='\0';
                        ime = buffer;
                        pozicija = pozicija + brojKaraktera + 1;
                        brojKaraktera = -1;

                    }else if(polje==4){

                        data.copy(buffer,  brojKaraktera, pozicija);
                        buffer[brojKaraktera]='\0';
                        prezime = buffer;
                        pozicija = pozicija + brojKaraktera + 1;
                        brojKaraktera = -1;

                    }else{

                        data.copy(buffer, brojKaraktera, pozicija);

                        buffer[brojKaraktera]='\0';
                        tip = buffer;

                    }
                }
                brojKaraktera++;

            }
            infile.close();
    }

        void ispisiSignUp(){
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

    string getTip(){
            return tip;
        }
};

#endif // KORISNIK_HPP_INCLUDED
