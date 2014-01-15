#ifndef PLATEAU_H
#define PLATEAU_H

#include <iostream>
#include <string>
#include <vector>

#include "Case.h"
#include "Entite.h"

using namespace std;

class Plateau {
private :
        int m_largeur;
        int m_longueur;
        Case*** plateau;

        vector<Batiment *> v_Batiment;

        void lierBatiment(vector<Joueur *> joueurs,vector<Batiment *>v_chateau,vector<Batiment *>v_tour,int nbTour);
        bool testTour(Batiment * c, Batiment * t,vector<Batiment *>v_t);
public :
        Plateau(vector<Joueur *> joueurs,string nomFichier="plateau1.data");
        void setPlateau();
        ~Plateau();

        inline Entite * getEntite(int x, int y) { return plateau[x][y]->getOccupant(); }
        // retourne null si pas d'unite ou si c'est un batiment
        inline Case * getCase(int x, int y) { return plateau[x][y]; }
        inline void ajoutBatiment(Batiment * bat) { v_Batiment.push_back(bat); }
        bool isFini(ifstream& fichier);

        inline int getLargeur() { return m_largeur; }
        inline int getLongeur() { return m_longueur; }
};

#endif
