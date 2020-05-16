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

        friend ostream& operator<<(ostream& izlaz, const Proizvodjac& o);
};

#endif // PROIZVODJAC_HPP_INCLUDED
