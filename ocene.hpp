#ifndef OCENE_HPP_INCLUDED
#define OCENE_HPP_INCLUDED

class Ocene{

    protected:
        int animacija;
        int detalji;
        int prica;
        int voice_acting;

    public:
        double average(){
            return (animacija+detalji+prica+voice_acting)/4;
        }

        friend ostream& operator<<(ostream& izlaz, const Ocene& o);
};

#endif // OCENE_HPP_INCLUDED
