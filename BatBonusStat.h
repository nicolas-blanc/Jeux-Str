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

        int modifBonus();
        // Modifie le bonus dans le vector de joueur, en fonction du bonus et du nombre de tours

        int randomBonus();
    protected:
    private:
        int m_Bonus;
        int m_NbTours;
};

#endif // BATBONUSSTAT_H
