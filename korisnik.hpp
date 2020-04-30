#ifndef KORISNIK_HPP_INCLUDED
#define KORISNIK_HPP_INCLUDED
#include "sign up.hpp"
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
};

#endif // KORISNIK_HPP_INCLUDED
