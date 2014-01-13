#ifndef ATTAQUE_H
#define	ATTAQUE_H

#include <iostream>
#include <string>

using namespace std;

class Case;
class Entite;

class Attaque {
protected:
    int m_Degat;
    int m_Portee;
    int m_PtAction;
    Entite * m_Entite;

public:
    Attaque(int portee, int degat = 1, int ptAction = 1);
    inline void setDegat(int degat) { m_Degat = degat;};
    inline int getDegat() { return m_Degat/* + m_Entite->getJoueur()->getListeBonusJoueur(3)*/; };
    inline void setPortee(int portee) { m_Portee = portee; };
    inline int getPortee() { return m_Portee/* + m_Entite->getJoueur()->getListeBonusJoueur(4)*/; };
    inline void setPtAction(int ptAction) { m_PtAction = ptAction; };
    inline int getPtAction() { return m_PtAction; };

    virtual void lancerAttaque(Case* c);
    void Attaquer();
    void lierEntite(Entite* ent) { m_Entite = ent; }
};

#include "Entite.h"
#include "Case.h"

#endif	/* ATTAQUE_H */

