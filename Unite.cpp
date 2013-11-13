#include "../include/Unite.h"
#include "Case.h"

Unite::Unite(unsigned int mvt, unsigned int ct, unsigned int pop, unsigned int vie, AttaqueDeBase atk, Case c)
:
m_vie(0,vie)
{
    this->setMouvement(mvt);
    this->setCout(ct);
    this->setPopulation(pop);
    this->setAttaqueParDefaut(atk);
    this->setPosition(c);
}

void deplacer(Case c) {
}

void modifierVie(int vie) {
}

void Unite::attaquer(Case c, Attaque attaque = GetattaqueParDefaut()) {
    attaque.lancerAttaque(c);
}





/*/----------------------------------------------------------------------
//dans les classes attaquesDeBase et Sort (qui sont sous-classes de Attaque)
//----------------------------------------------------------------------
AttaqueDeBase::lancerAttaque(Case c) {
    c.transmettreAttaque(getDegats);
}

Sort::lancerAttaque(Case c) {
    
    for (int i=0; i<sort.zone; i++) { // /!\ bien gérer toutes les cases de la zone, pas sûr que cet algo marche
        for (int j=0;j<sort.zone;j++) {
            plateau[case.getx+i][case.gety+j].ajouterEffet(sort);
            plateau[case.getx-i][case.gety-j].ajouterEffet(sort);
        }
    }
}*/