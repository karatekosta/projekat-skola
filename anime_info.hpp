#ifndef ANIME_INFO_HPP_INCLUDED
#define ANIME_INFO_HPP_INCLUDED

class Anime_info{

    protected:
        string ime;
        string jezik;
        bool zavrseno;
    public:
        Anime_info(string i, string j, bool z){
            ime=i;
            jezik=j;
            zavrseno=z;
        }

        Anime_info(){
            ime="";
            jezik="";
            zavrseno=false;
        }

        string getIme(){
            return ime;
        }

        string getJezik(){
            return jezik;
        }

        bool getZavrseno(){
            return zavrseno;
        }

        void setIme( string i){
            ime=i;
        }

        void setJezik( string j){
            jezik=j;
        }

        void setZavrseno( bool z){
            zavrseno=z;
        }

        virtual void ispisImeJezik(){
            cout<<"Ime animea: " << ime <<endl;
            cout<<"Jezik: " << jezik <<endl;
        }
};

#endif // ANIME_INFO_HPP_INCLUDED
