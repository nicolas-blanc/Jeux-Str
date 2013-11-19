#ifndef UNITE_H
#define UNITE_H

#include "Entite.h"
#include <vector>

using namespace std;

class Unite : public Entite {
    public:
        Unite(unsigned int mvt, unsigned int ct, unsigned int pop, int vie, int min);
        virtual ~Unite();
        inline int getMouvement() { return m_mouvement; }
        inline void setMouvement(int val) { if (val >= 0) m_mouvement = val; } // a modif exception
        inline int getCout() { return m_cout; }
        inline void setCout(int val) { if (val >= 0) m_cout = val; } // a modif exception
        inline int getPopulation() { return m_population; }
        inline void setPopulation(int val) { if (val >= 0) m_population = val; } // a modif exception
        inline AttaqueDeBase getAttaqueParDefaut() { return attaqueParDefaut; }
        virtual void InitAttaqueParDefaut(AttaqueDeBase val) = 0;
        inline Sort getSort(int pos) { return v_sort[pos]; }
        virtual void initSort() = 0; 

        void deplacer(Case c);
        void modifierVie(int vie);
        void attaquer(Case c, Attaque attaque = attaqueParDefaut);
    protected:
        string m_nom;
        unsigned int m_mouvement;
        unsigned int m_cout;
        unsigned int m_population;
        AttaqueDeBase attaqueParDefaut;
        vector <Sort*> v_sort;
};

#endif // UNITE_H
