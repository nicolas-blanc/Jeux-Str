#ifndef ENTITE_H
#define ENTITE_H

#include <string>
#include <iomanip>
#include <vector>

#include "PointDeVie.h"

using namespace std;

class Attaque;
class Case;
class Joueur;

class Entite
{
    public:
        Entite(vector<Case> ensCase, Joueur* j, string nom, int vieMin, int vieMax);
        virtual ~Entite();
        inline string Getnom() { return m_nom; }
        inline void Setnom(string val) { m_nom = val; }
        inline int getVie() { return m_vie.GetValeur(); }
        inline void setVie(int val) { m_vie.modifVie(val); }
        inline vector<Case> getPosition() { return m_position; }
        inline void setPosition(vector<Case> position) { m_position = position; }
        inline void setJoueur(Joueur* j) {m_Joueur=j;}
        inline Joueur* getJoueur() {return m_Joueur;}
        void modifierVie(int vie);
        inline bool estMort() { return m_vie.GetValeur() == 0;};

//        int& operator[] (unsigned int i) { return m_position[i]; };
    protected:
        string m_nom;
        PointDeVie m_vie;
        vector<Case> m_position;
        Joueur* m_Joueur;
};

#include "Attaque.h"
#include "Case.h"
#include "Joueur.h"

#endif // ENTITE_H
