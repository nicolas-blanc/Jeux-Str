#ifndef ENTITE_H
#define ENTITE_H

#include <string>

#include <iomanip>

#include "Attaque.h"
#include "CaseGen.h"
#include "PointDeVie.h"

using namespace std;

class Entite
{
    public:
        Entite(int vie);
        virtual ~Entite();
        inline string Getnom() { return m_nom; }
        inline void Setnom(string val) { m_nom = val; }
        inline int getVie() { return m_vie.GetValeur(); }
        inline void setVie(int val) { m_vie.SetValeur(val); }
        inline Case getPosition() { return m_position; }
        inline void setPosition(Case val) { m_position = val; }

    protected:
        string m_nom;
        PointDeVie m_vie;
        Case m_position;
        Joueur m_joueur;
};

#endif // ENTITE_H
