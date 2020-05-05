#ifndef KORISNIK_HPP_INCLUDED
#define KORISNIK_HPP_INCLUDED
#include "sign up.hpp"
#include <fstream>
#include <string>

using namespace std;

class Korisnik{

    protected:
        string username;
        string nickname;
        string password;
        bool Admin;
    public:

        Korisnik(){
            username="";
            nickname="";
            password="";
            Admin=false;
        }

        Korisnik(string u, string n, string p){
                username=u;
                nickname=n;
                password=p;
            }


        void setUsername(const string u){
            username=u;
        }

        void setNickname(const string n){
            nickname=n;
        }

        void setPassword(const string p){
            password=p;
        }

        void registracija(){
            // "Username: ">>  "/nNickname: ">> "/nPassword" >>
            string u, n, p;
            cout << "Username: " << endl;
            cin >> u;
            cout << "Nickname: " << endl;
            cin >> n;
            cout << "Password: " << endl;
            cin >> p;

            setUsername(u);
            setNickname(n);
            setPassword(p);
        }

        void upisiSignUp(string nazivFajla){
            ofstream outfile;
            outfile.open("korisnici.txt", std::ios_base::app);
            outfile<< username << "," << nickname << "," << password<< "," <<endl;
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
};

#endif // KORISNIK_HPP_INCLUDED
