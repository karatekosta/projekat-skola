#ifndef ANIME_FACTS_HPP_INCLUDED
#define ANIME_FACTS_HPP_INCLUDED

class Anime_facts{

    protected:
        bool bazirano_na_realnoj_prici;
        string easter_eggs;
        string prave_lokacije_iz_animea;
        string vreme_odvijanja_anime;
    public:
        Anime_facts(){
            bazirano_na_realnoj_prici=false;
            easter_eggs="Nema";
            prave_lokacije_iz_animea="Nema";
            vreme_odvijanja_anime="Ne odredjeno";
        }

        Anime_facts(bool bnrp, string eg, string plia, string voa){
            bazirano_na_realnoj_prici=bnrp;
            easter_eggs=eg;
            prave_lokacije_iz_animea=plia;
            vreme_odvijanja_anime=voa;
        }

        string getEaster(){
            return easter_eggs;
        }

        string getPLIA(){
            return prave_lokacije_iz_animea;
        }

        string getVOA(){
            return vreme_odvijanja_anime;
        }

        bool getBNRP(){
            return bazirano_na_realnoj_prici;
        }

        void setBNRP(const bool bnrp){
            bazirano_na_realnoj_prici=bnrp;
        }

        void setEaster(const string e){
            easter_eggs=e;
        }

        void setPLIA(const string p){
            prave_lokacije_iz_animea=p;
        }

        void setVOA(const string v){
            vreme_odvijanja_anime=v;
        }

        friend ostream& operator<<(ostream& izlaz, const Anime_facts& o);


};

#endif // ANIME_FACTS_HPP_INCLUDED
