#ifndef ENTITE_H
#define ENTITE_H

#include <string>

#include <iomanip>

#include "Attaque.h"
#include "Case.h"
#include "PointDeVie.h"
#include "vector"

using namespace std;

class Joueur;
class Entite
{
    public:
        Entite(vector<Case> ensCase, Joueur j, string nom, int vieMin, int vieMax);
        virtual ~Entite();
        inline string Getnom() { return m_nom; }
        inline void Setnom(string val) { m_nom = val; }
        inline int getVie() { return m_vie.GetValeur(); }
        inline void setVie(int val) { m_vie.modifVie(val); }
        inline vector<Case> getPosition() { return m_position; }
        inline void setPosition(Case val) {/* a modifier*/}
        inline void setJoueur(Joueur* j) {m_Joueur=j;}
        inline Joueur* getJoueur() {return m_Joueur;}

    protected:
        string m_nom;
        PointDeVie m_vie;
        vector<Case> m_position;
        Joueur* m_Joueur;
};

#include "Joueur.h"
#endif // ENTITE_H
