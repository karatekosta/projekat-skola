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

        friend ostream& operator<<(ostream& izlaz, const Anime_facts& o);
};

#endif // ANIME_FACTS_HPP_INCLUDED
