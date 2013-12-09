#ifndef UNITE_H
#define UNITE_H

#include "Entite.h"
#include "Effet.h"
#include <vector>

using namespace std;
class AttaqueDeBase;
class Unite : public Entite {
    public:
        Unite(unsigned int mvt, unsigned int ct, unsigned int pop, int vieMax, int vieMin, vector<Case> ensCase, Joueur j, string nom);
        virtual ~Unite();
        int getMouvement();
        inline void setMouvement(int val) { if (val >= 0) m_mouvement = val; } // a modif exception
        inline int getCout() { return m_cout; }
        inline void setCout(int val) { if (val >= 0) m_cout = val; } // a modif exception
        inline int getPopulation() { return m_population; }
        inline void setPopulation(int val) { if (val >= 0) m_population = val; } // a modif exception
        inline AttaqueDeBase* getAttaqueParDefaut() { return m_AttaqueParDefaut; }
        inline Sort* getSort(int pos) { return &v_sort[pos]; }
        virtual void initSort();

        void deplacer(Case c);
        Case deplacement(Case c);
        void modifierVie(int vie);
        void attaquer(Case c, Attaque* attaque);
        void attaquer(Case c);

        inline void insererEffet(Effet effet) { this->v_effet.push_back(effet); };
        void enleverEffet(Effet effet);

    protected:
        string m_nom;
        unsigned int m_mouvement;
        unsigned int m_cout;
        unsigned int m_population;
        AttaqueDeBase* m_AttaqueParDefaut;
        map <string,Sort> v_sort;
        vector <Effet> v_effet;

    private:
        inline int getDepX(Case c) { int dep = c.getX() - Entite::getPosition()[0].getX(); if(dep < 0) return (-dep); else return dep; };
        inline int getDepY(Case c) { int dep = c.getY() - Entite::getPosition()[0].getY(); if(dep < 0) return (-dep); else return dep; };
};
#include "AttaqueDeBase.h"

#endif // UNITE_H
