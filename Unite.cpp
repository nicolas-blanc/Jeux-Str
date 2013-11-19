#include "Unite.h"

Unite::Unite(unsigned int mvt, unsigned int ct, unsigned int pop, int vie, int min)
: Entite(vie,min)
{
    this->setMouvement(mvt);
    this->setCout(ct);
    this->setPopulation(pop);
}

void deplacer(Case c) {
}

void modifierVie(int vie) {
}

void Unite::attaquer(Case c, Attaque attaque = getAttaqueParDefaut()) {
    attaque.lancerAttaque(c);
}