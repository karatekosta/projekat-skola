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
};

#endif // ANIME_INFO_HPP_INCLUDED
