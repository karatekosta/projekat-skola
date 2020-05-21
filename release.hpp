#ifndef RELEASE_HPP_INCLUDED
#define RELEASE_HPP_INCLUDED

class Release{

    protected:
        string datum_objave;
        string mesto_objave;
    public:
        Release(){
            datum_objave="";
            mesto_objave="";
        }

        Release(string d, string m){
            datum_objave=d;
            mesto_objave=m;
        }
        string getDatum(){
            return datum_objave;
        }

        string getMesto(){
            return mesto_objave;
        }

        void setDatum(const string d){
            datum_objave=d;
        }

        void setMesto(const string m){
            mesto_objave=m;
        }

        //geteri, seteri, konstruktor sa parametrima
};

#endif // RELEASE_HPP_INCLUDED
