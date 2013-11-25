#ifndef CASE_H
#define CASE_H
#include <iostream>
#include <string>
#include <vector>
#include "PointDeVie.h"

using namespace std;

class Entite;
class Effet;
class Case {
private :
        Entite* m_occupant;
        vector<Effet> effets;
        int m_x;
        int m_y;
public :
        Case(int x, int y);
        void setOccupant(Entite* occ);
        void transmettreAttaque(int nbPV);
        bool isOccupee();
        void declencherEffets();
        
        inline int getX() { return m_x; };
        inline int getY() { return m_y; };
};
#include "Effet.h"
#include "Entite.h"

#endif
