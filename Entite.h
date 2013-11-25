#ifndef ENTITE_H
#define ENTITE_H

#include <string>

#include <iomanip>
#include <vector>

#include "Attaque.h"
#include "Case.h"
#include "PointDeVie.h"

using namespace std;

class Entite
{
    public:
        Entite(vector<Case> ensCase, Joueur j, string nom, int vieMin, int vieMax);
        virtual ~Entite();
        inline string Getnom() { return m_nom; }
        inline void Setnom(string val) { m_nom = val; }
        inline int getVie() { return m_vie.GetValeur(); }
        inline void setVie(int val) { m_vie.SetValeur(val); }
        inline Case getPosition() { return m_position; }
        inline void setPosition(Case val) { m_position = val; }
        inline void setJoueur(Joueur j){ m_joueur = j;}
        inline Joueur getJoueur(){return m_joueur;}

    protected:
        string m_nom;
        PointDeVie m_vie;
        vector<Case> m_position;
        Joueur m_joueur;
};

#endif // ENTITE_H
