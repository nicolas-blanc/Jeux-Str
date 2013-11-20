#ifndef BATBONUSSTAT_H
#define BATBONUSSTAT_H


class BatBonusStat
{
    public:
        BatBonusStat();
        inline int GetBonus() { return m_Bonus; }
        inline void SetBonus() { m_Bonus = this->randomBonus();}
        inline int GetNbTours() { return m_NbTours; }
        inline void SetNbTours(int nbTours) { m_NbTours = nbTours; }

        void setJoueur(Joueur joueur);

        int modifAttaque();
        int modifPortee();
        int modifPtAction();
        int modifPopulation();
        int modifMouvement();

        // On appelle la modifaction a chaque fois que l'on fais appel a la caracteristique, on test dans cette fonction si le bonus correspond,
            // et si il correspond, on a ajoute le bonus en fonction de nbTours

        int randomBonus();
    protected:
    private:
        int m_Bonus;
        int m_NbTours;
};

#endif // BATBONUSSTAT_H
