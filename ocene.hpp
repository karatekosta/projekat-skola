#ifndef OCENE_HPP_INCLUDED
#define OCENE_HPP_INCLUDED

class Ocene{

    private:
        int animacija;
        int detalji;
        int prica;
        int voice_acting;

    public:
        int average(){
            return (animacija+detalji+prica+voice_acting)/4;
        }
};

#endif // OCENE_HPP_INCLUDED
