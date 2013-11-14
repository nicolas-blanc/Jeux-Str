#ifndef UNITE_H
#define UNITE_H

#include "./PointDeVie.h"

#include <vector>
#include <string>

using namespace std;

class Unite
{
    public:
        Unite(unsigned int mvt, unsigned int ct, unsigned int pop, unsigned int vie, AttaqueDeBase atk, Case c);
        virtual ~Unite();
        inline string getNom() { return m_nom;}
        inline void setNom(string nom) { m_nom = nom; } // a modif -> abstrait ?
        inline int getMouvement() { return m_mouvement; }
        inline void setMouvement(int val) { if (val >= 0) m_mouvement = val; } // a modif exception
        inline int getCout() { return m_cout; }
        inline void setCout(int val) { if (val >= 0) m_cout = val; } // a modif exception
        inline int getPopulation() { return m_population; }
        inline void setPopulation(int val) { if (val >= 0) m_population = val; } // a modif exception
        inline AttaqueDeBase getAttaqueParDefaut() { return attaqueParDefaut; }
        inline void setAttaqueParDefaut(AttaqueDeBase val) { attaqueParDefaut = val; }
        inline int getVie() { return m_vie.GetValeur(); }
        inline void setVie(int val) { m_vie.SetValeur(val); }
        inline Case getPosition() { return m_position; }
        inline void setPosition(Case val) { m_position = val; }

        Sort getSort(int pos) { return v_sort[pos]; }

        void deplacer(Case c);
        void modifierVie(int vie);
        void attaquer(Case c, Attaque attaque = attaqueParDefaut);
    protected:
    private:
        string m_nom;
        unsigned int m_mouvement;
        unsigned int m_cout;
        unsigned int m_population;
        AttaqueDeBase attaqueParDefaut;
        PointDeVie m_vie;
        Case m_position;
        vector <Sort*> v_sort;
};

#endif // UNITE_H
