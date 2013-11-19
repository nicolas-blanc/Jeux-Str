#ifndef ATTAQUE_H
#define	ATTAQUE_H

#include <iostream>
#include <string>
#include "CaseGen.h"

using namespace std;

class Attaque {
public:
    Attaque(int portee, int degat = 1, int ptAction = 1);
    void Attaquer();
    inline void setDegat(int degat) { m_Degat = degat;};
    inline int getDegat() { return m_Degat;};
    inline void setPortee(int portee) { m_Portee = portee; };
    inline int getPortee() { return m_Portee; };
    inline void setPtAction(int ptAction) { m_PtAction = ptAction; };
    inline int getPtAction() { return m_PtAction; };
    
    virtual void lancerAttaque(Case c) = 0; //C'est une fonction virtuelle pure --> classe abstraite
protected:
    int m_Degat;
    int m_Portee;
    int m_PtAction;
};

#endif	/* ATTAQUE_H */

