#ifndef PROIZVODJAC_HPP_INCLUDED
#define PROIZVODJAC_HPP_INCLUDED

class Proizvodjac{

    protected:
        string ime_autora;
        string zemlja_porekla;
    public:
        Proizvodjac(){
            ime_autora="Nepoznat";
            zemlja_porekla="Japan";
        }

        Proizvodjac(string ia, string zp){
            ime_autora=ia;
            zemlja_porekla=zp;
        }

        string getImeAutora(){
            return ime_autora;
        }

        string getZemlja(){
            return zemlja_porekla;
        }

        void setIme(const string ia){
            ime_autora=ia;
        }

        void setZemlja(const string zp){
            zemlja_porekla=zp;
        }

        friend ostream& operator<<(ostream& izlaz, const Proizvodjac& o);
};


ostream& operator<<(ostream& izlaz, const Proizvodjac& o){
    izlaz<<"Proizvodjac i zemlja porekla:"<<endl;
    izlaz<<"Proizvodjac: "<<o.ime_autora<<endl;
    izlaz<<"Detalji: "<<o.zemlja_porekla<<endl;

    return izlaz;
}

#endif // PROIZVODJAC_HPP_INCLUDED
