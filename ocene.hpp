#ifndef OCENE_HPP_INCLUDED
#define OCENE_HPP_INCLUDED

class Ocene{

    protected:
        int animacija;
        int detalji;
        int prica;
        int voice_acting;
        int brojOcena;

    public:
        Ocene(){
            animacija=5;
            detalji=5;
            prica=5;
            voice_acting=5;
            brojOcena=1;
        }

        void dodajOcenu(int a, int d, int p, int va){
            brojOcena++;
            animacija=(animacija*(brojOcena-1)+a)/brojOcena;
            detalji=(detalji*(brojOcena-1)+d)/brojOcena;;
            prica=(prica*(brojOcena-1)+p)/brojOcena;;
            voice_acting=(voice_acting*(brojOcena-1)+va)/brojOcena;;

        }
        double average(){
            return (animacija+detalji+prica+voice_acting)/4;
        }

        void setAnimacija(const int a){
            animacija=a;
        }

        void setDetalji(const int d){
            detalji=d;
        }

        void setPrica(const int p){
            prica=p;
        }

        void setVoice(const int va){
            voice_acting=va;
        }

        int getAnimacija(){
            return animacija;
        }

        int getDetalji(){
            return detalji;
        }

        int getPrica(){
            return prica;
        }

        int getVoice(){
            return voice_acting;
        }

        int getBrojOcena(){
            return brojOcena;
        }
        friend ostream& operator<<(ostream& izlaz, const Ocene& o);
};

#endif // OCENE_HPP_INCLUDED
