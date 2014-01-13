#ifndef CASE_H
#define CASE_H

#include <iostream>
#include <string>
#include <vector>


using namespace std;

class Entite;
class Unite;
class Effet;

class Case {
private :
        Entite* m_occupant;
        bool m_batiment;
        vector<Effet*> m_effets;
        int m_x;
        int m_y;
public :
        Case(int x, int y);
        void setOccupant(Entite* occ, bool bat = false);
        inline Entite* getOccupant() {return m_occupant;}
        inline Entite* getUnite() { if (!(m_batiment)) return m_occupant; else return NULL; }
        void transmettreAttaque(int nbPV);
        bool isOccupee();
        void declencherEffets();
        void setCase(Entite* entite);

        inline int getX() { return m_x; };
        inline int getY() { return m_y; };

        void dessinerCase();
};

#include "Entite.h"
#include "Unite.h"
#include "Effet.h"

#endif
