#ifndef PLATEAU_H
#define PLATEAU_H

#include <iostream>
#include <string>

#include "Case.h"
#include "Entite.h"

using namespace std;

class Plateau {
private :
        int m_largeur;
        int m_longueur;
        Case*** plateau;

        vector<Batiment *> v_Batiment;
public :
        Plateau(string nomFichier="plateau1.data");
        void setPlateau();
        ~Plateau();

        inline Unite * getEntite(int x, int y) { return (Unite) plateau[x][y]->getOccupant(); }
        // retourne null si pas d'unite ou si c'est un batiment
        inline Case * getCase(int x, int y) { return plateau[x][y]; }
        inline void ajoutBatiment(Batiment * bat) { v_Batiment.push_back(bat); }
};

#endif
