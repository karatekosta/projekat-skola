#ifndef ZANR_HPP_INCLUDED
#define ZANR_HPP_INCLUDED

enum Zanrovi{komedija=1, tragedija, mystery, action, sci_fi, sports, romance, ecchi, shonen};

class Zanr{

    protected:
        Zanrovi zanr1;
        string opis_zanra;
    public:
        //metoda ispisi zanr
        Zanr(){
        zanr1=action;
        opis_zanra="Nema opisa";
        }

        Zanr(Zanrovi z, string o){
            zanr1=z;
            opis_zanra=o;
        }

        void setOpis(const string o){
            opis_zanra=o;
        }

        void setZanr(int z){

        Zanrovi vrednost ;

           switch(z){
                case komedija:
                    vrednost=komedija;
                    break;
                case tragedija:
                    vrednost=tragedija;
                    break;
                case mystery:
                    vrednost=mystery;
                    break;
                case action:
                    vrednost=action;
                    break;
                case sci_fi:
                    vrednost=sci_fi;
                    break;
                case sports:
                    vrednost=sports;
                    break;
                case romance:
                    vrednost=romance;
                    break;
                case ecchi:
                    vrednost=ecchi;
                    break;
                case shonen:
                    vrednost=shonen;
                    break;
                default: vrednost=komedija;
                    break;
            }

            zanr1=vrednost;
        }

        string getOpis(){
            return opis_zanra;
        }

        string getZanr(){
            string vrednost;
            switch(zanr1){
                case komedija:
                    vrednost="komedija";
                    break;
                case tragedija:
                    vrednost="tragedija";
                    break;
                case mystery:
                    vrednost="mystery";
                    break;
                case action:
                    vrednost="action";
                    break;
                case sci_fi:
                    vrednost="sci_fi";
                    break;
                case sports:
                    vrednost="sports";
                    break;
                case romance:
                    vrednost="romance";
                    break;
                case ecchi:
                    vrednost="ecchi";
                    break;
                case shonen:
                    vrednost="shonen";
                    break;
                default: vrednost="Nema zanr";
                    break;
            }
            return vrednost;
        }

};

#endif // ZANR_HPP_INCLUDED
