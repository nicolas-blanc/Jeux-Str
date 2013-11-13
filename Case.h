#ifndef CASE_H
#define CASE_H
#include <iostream>
#include <string>
#include <vector>
#include "Unite.h"
#include "CaseGen.h"
#include "PV.h"

using namespace std;

template <class T>
class Case : public CaseGen {
private :
        T occupant;
        vector<Effet> effets;
public :
        Case(int x, int y);
        void setOccupant(T occ);
        void transmettreAttaque(int nbPV);
        bool isOccupee();
        void declencherEffets();
};

#endif